//
//  main.cpp
//  Demo2
//
//  Created by Dario Caric on 09.12.2023..
//

#include <iostream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;


int myRandome (int min, int max) {
    return (min + rand()%(max - min + 1));
}

// za verziju 1
void printX_N_times(int n) {
    for (int i=0; i < n; i++) cout << "x"; // ovo ispisuje sve u jedan red
    cout << endl; // sad ide u novi red
}


// za verziju 2
string printX_N_times_str(int n) {
    string str = "";
    for (int i=0; i < n; i++) str = str + "x";
    return str;
}


int main(int argc, const char * argv[]) {

    // inicijalizra pocetak za rand() funkciju ovo se u 99% ako ne i 100% slucajeva zove samo jednom
    // a to je opet u 99-100% slucajeva u main() funkciji
    // tako da kad rand(9 funkciju budemo pozvali bilo gdje i bilo koliko puta ona NECE poceti generirati randome
    // brojeve od pocetka jer onda to ne bi bilo randome
    srand(time(NULL));
    
    
    
    // verzija 1
    for (int i = 1; i < 5; i++) {
        // generiramo randome broj
        int ranNum = myRandome(1, 10);
        
        // sad koristimo taj broj za printanje
        // ova funkcija ispod u sebi ima for i cout i ispisat ce
        // n puta X u jednoj liniji i na kraju ce ici u novi red
        cout << ranNum << " "; // ova linije ispise taj generirani random broj + SPACE i ostane u isti red sto je bitno jer nema ENDL
        // ova dole funkcija ispisuje di se stalo a to je di je gornja linija stala
        // PRIMJER  4 XXXX
        // PRIMEJR  3 XXX
        printX_N_times(ranNum);
        cout << endl; // na kraju idemo u novi red
    }
    
    
    // verzija 2
    for (int i = 1; i < 5; i++) {
        // generiramo randome broj
        int ranNum = myRandome(1, 10);
        
        cout << ranNum << " " << printX_N_times_str(ranNum) << endl;
        
    }
    
    return 0;
}
