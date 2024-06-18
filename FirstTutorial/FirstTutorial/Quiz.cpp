//
//  Quiz.cpp
//  FirstTutorial
//
//  Created by Dario Caric on 15.08.2023..
//

#include "Quiz.hpp"
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include <map>
#include <vector>

using namespace std;


// PRIVATE:
/*
 {
   "question": "A pita is a type of what?",
   "A": "fresh fruit",
   "B": "flat bread",
   "C": "French tart",
   "D": "friend bean dip",
   "answer": "B"
 }
 */
vector<QuizQuestion> Quiz::parseQuestions(const std::string& jsonString) {
    json myJson = json::parse(jsonString);
    
    vector<QuizQuestion> questions;

    for (const auto& item : myJson) {
        QuizQuestion q;
        q.question = item["question"].get<string>();
        q.options['A'] = item["A"].get<string>();
        q.options['B'] = item["B"].get<string>();
        q.options['C'] = item["C"].get<string>();
        q.options['D'] = item["D"].get<string>();
        q.answer = item["answer"].get<string>()[0]; // Assuming answer is always a single character

        questions.push_back(q);
    }

    return questions;
}

/*
 The purpose of this function is to be used as a callback for libcurl when data is received from an HTTP request. The primary task is to collect (or "write") this data somewhere so it can be processed or stored. This function gets called multiple times by libcurl - each time a "chunk" of data is received.
 
 The function returns the number of bytes taken care of. If this does not match the amount passed to your function, it'll signal an error to libcurl.
 
 void* contents: A pointer to the actual data that's been received. It can be a chunk of an HTML page, JSON data, or any other type of data you're fetching.
 size_t size: This is always 1 for this context.
 size_t nmemb: The number of bytes in the contents buffer. It tells us the size of the chunk received.
 void* userp: A user pointer. This allows us to pass custom data to the callback function. In your case, you're passing a pointer to a std::string (readBuffer), which will store the fetched data.
 
 */
size_t Quiz::WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

// PUBLIC:

/**
 Makes GET request
 This function's purpose is to make an HTTP GET request to the provided URL and return the resulting data (in your case, presumably JSON data).
 
 CURL* curl;: Declare a pointer to a CURL object. This object holds a lot of state and options for the transfer.
 CURLcode res;: This type is an enumeration, and it will hold the result code of the curl_easy_perform function.
 string readBuffer;: This is the string where the fetched data will be stored.
 curl_easy_init(): Initializes a session and returns a CURL handle that you'll use for other libcurl operations.
 The next block of code sets various options for the libcurl transfer:

 CURLOPT_URL sets the URL you want to fetch.
 CURLOPT_WRITEFUNCTION tells libcurl which function to call when there's data to write/save.
 CURLOPT_WRITEDATA is the user pointer that will be passed to the write function; in this case, a pointer to readBuffer.
 
 @param url which will be fetched
 @return JSON as a string
 */
string Quiz::http_get(const string& url) {
    CURL* curl;
    CURLcode res;
    string readBuffer;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        
        // performs the transfer (makes the HTTP GET request).
        res = curl_easy_perform(curl);
        //cout << "res:" << res << endl;
        
        if(res != CURLE_OK) {
            cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << endl;
        }
        curl_easy_cleanup(curl);
    }
    return readBuffer; // returns the fetched data, returns the raw JSON data
}


/**
 Parse JSON and prints all questions
 
 @param jsonString JSON object
 */
void Quiz::handleAndDisplay(const string& jsonString) {
    // Parse the JSON and store the questions
    vector<QuizQuestion> questions = parseQuestions(jsonString);

    // Display the questions
    for (const auto& q : questions) {
        cout << "Question: " << q.question << endl;
        for (const auto& option : q.options) {
            cout << option.first << ". " << option.second << endl;
        }
        cout << endl;  // Add a space between questions
    }
}





