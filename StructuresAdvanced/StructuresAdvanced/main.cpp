//
//  main.cpp
//  StructuresAdvanced
//
//  Created by Dario Caric on 10.01.2024..
//

#include <iostream>
#include <string>

using namespace std;

struct book {
    string title;
    string author;
    vector<string> chapters;
};

// structure collection has 2 members and one of them is a list of another structure
struct collection {
    string title;
    vector<book> books;
};

int main() {
    
    collection myCollection; // myCollection is object of collection
    
    // insert data for myCollection, let it have 3 books
    cout << "Write collection name" << endl;
    getline(cin, myCollection.title);
    
    for (int i = 0; i < 3; i++) {
        book tempBook;
        
        // sad ide punjenje ove tempBook
        cout << "Write title and author for book number:" << i + 1 << endl;
        getline(cin, tempBook.title); // ovo je bitno shvatiti di se stavlja [i] a di .title i .autor
        getline(cin, tempBook.author);
        
        // definiranje poglavlja <chapters> za jednu knjigu - tempBpook
        cout << "Write 4 chapters for this book" << endl;
        for (int j = 0; j < 4; j++) {
            string tempChapter;
            getline(cin, tempChapter);
            tempBook.chapters.push_back(tempChapter); // punjenje variajble chapters od tempBook
        }
        
        // na kraju kad je tempBook skroz napunjen (to je jedna knjiga) pusha se citav taj objekt u listu myCollection.books jer var books od collection-a je lista (lista knjiga)
        myCollection.books.push_back(tempBook);

    }
    cout << endl << endl;
    
    // printing data
    cout << "Collection title: " << myCollection.title;
    for (int i = 0; i < 3; i++) {
        cout << "Book title: " << myCollection.books[i].title << " Author: " << myCollection.books[i].author << endl;
        cout << "Chapters:" << endl;
        for (int j = 0; j < 4; j++) {
            cout << myCollection.books[i].chapters[j] << endl;
        }
        cout << endl;
    }
    

    return 0;
}
