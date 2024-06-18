//
//  main.cpp
//  FirstTutorial
//
//  Created by Dario Caric on 02.08.2023..
//

#include <iostream>
#include "menu.hpp"
#include "GuessNumber.hpp"
#include "Constants.hpp"
#include "Calculator.hpp"
#include "Quiz.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    menu MyMenuOld;
    menu MyMenu({"Guess Number", "Calculator", "fdfsg"});

    string selectionOld  = "";
    string selection  = "";

    /*
    while (selection != menu::endOfApp) {
        selection = MyMenu.showMenu();
    }
     */

    
    while (selection != menu::endOfApp) {
        selection = MyMenuOld.showMenu({Constants::GUESS_NUMBER, Constants::CALCULATOR, Constants::QUIZ});
        cout << "Returned:" << selection << "\n";
        
        if (selection == Constants::GUESS_NUMBER) {
            GuessNumber gn;
            GuessNumber gn2 = GuessNumber(1,100);
            
            gn.printRandomNumber();
            gn2.printRandomNumber();
        } else if (selection == Constants::CALCULATOR) {
            Calculator::runCalculator();
        } else if (selection == Constants::QUIZ) {
            Quiz myQuiz;
            string fetchedData = myQuiz.http_get(Constants::QUIZ_URL);
            myQuiz.handleAndDisplay(fetchedData);
            
            //string url = "http://dcapps.net/quiz.json";
            //string content = myQuiz.http_get(url);
            //cout << content << endl;

        }

    }
    

    
    return 0;
}
