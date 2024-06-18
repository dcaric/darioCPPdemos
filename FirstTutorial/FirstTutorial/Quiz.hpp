//
//  Quiz.hpp
//  FirstTutorial
//
//  Created by Dario Caric on 15.08.2023..
//

#ifndef Quiz_hpp
#define Quiz_hpp

#include <stdio.h>
#include <curl/curl.h>
/*
 In the project settings under Build Phases, expand Link Binary With Libraries.
 Click the + button to add a new library.
 In the dialog that appears, search for libcurl. You should find libcurl.tbd or a similar file. Select it and click Add.
 */

#include <iostream>
#include <string>
#include <nlohmann/json.hpp> // brew install nlohmann-json
/*
 Choose your target application.
 Go to the Build Settings tab.
 Search for Header Search Paths.
 Add /usr/local/include/ to the list.
 */
#include <map>
#include <vector>


using namespace std;
using json = nlohmann::json;

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
struct QuizQuestion {
    string question;
    map<char, string> options;
    char answer;
};



class Quiz {
    
    
public:
    void getQuestions();
    string http_get(const string& url);
    string http_get1(const string& url);
    void handleAndDisplay(const string& jsonString);

private:
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp);
    vector<QuizQuestion> parseQuestions(const string& jsonString);


};

#endif /* Quiz_hpp */
