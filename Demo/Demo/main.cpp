//
//  main.cpp
//  Demo
//
//  Created by Dario Caric on 29.11.2023..
//

#include <iostream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    // arrays
    int list1 [5];
    vector<int> list2;

    srand(time(NULL));

    for (int i=0; i<5; i++){
        int random = 15 + rand()%(25-15+1);
        list1[i] = random; // list1 koristi INDEX i jer je array (lista) ne obicna varijabla
        list2.push_back(random);
        cout << random << " ";
    }
    cout << endl;
    cout << "Size of list1: " << list2.size() << endl;



    // string
    string str ="Hello paola, nice to meet you!";

    // FOR krece od 0 jer ovdje sluzi u svrhu ITERACIJE a to znaci da "seta" sa INDEXom od pocetka (0) do kraja (str.length() - 1) jer indexi idu od [0 do max-1] a ne od [1 - max]
    // 0 ne od 1
    for (int i=0; i<str.length(); i++){
        cout << str[i] << endl; // str je ciatv string (recenica ili sastav citav) a str[i] je kao i kod arraya jedan element a to je u stringu jedan znak u biti
    }

    // inverse string
    for (long i=str.length() - 1; i>=0; i--){
        cout << str[i];
        }
    cout << endl;

    
    // find digits for number and reverse number
    int myNum = 46829;
    cout << "Num: " << myNum << endl;
    long numSize = to_string(myNum).length();
    cout << "Size: " << numSize << endl << endl;

    int reverseNum = 0;
    while (myNum != 0){ // ovdje je bitno proci u glavi 2 kruga barem sve linije ili pise sa strane vrijednosti
        int digit = myNum % 10;

        // reads digit by digit from backwards - 9,2,8,6,4
        myNum = myNum / 10;
        cout << "digit: " << digit << endl;

        // builds reverse number
        reverseNum = reverseNum * 10 + digit;
    }
    cout << "Reverse num: " << reverseNum << endl;

    
    // MATRIX
    // ovdje mozemo for staviti od 1 jer nam ne sluzi za indexe polja nego da VOZI po redovima
    // i druga for da VOZI po kolonama u pojedinom redu
    int p = 0;
    int m = 10;
    for (int i = 1; i<=m/2; i++) { // ROWS
        for (int j = 1; j<= m; j++) { // COLUMNS
            // ovdje dolazi bitnba logika sto treba napraviti
            // u matrici - primjer 2 trokuta
            if (i == 1) cout << "*"; // prvi red sve *
            else if (j == (m / 2) || j == (m / 2 +1)) cout << "*"; // sredisnji dio za 2 stranice na j=5 0 j=6 ya ovaj primjer kad je do 10
            else if (j == i || j == m -(i-1)) cout << "*"; // kosine lijeva i desna
            else cout << " ";
        }
        cout << endl; // ovo je UVIJEK novi red jer ovdje zavrsava crtanje jednog reda - druga FOR
    }

    
    /**
     
      *** ***
       ** **
        * *
     
     */
    int n = 3;
    cout << endl << endl;
    for (int i = 1; i<=n; i++) { // ROWS
        int spaces = i - 1;
        
        // left part spaces
        for (int j = 1; j<=spaces; j++) { // COLUMNS
            cout << " ";
        }
        
        // left part *
        for (int j = 1; j<= n-spaces; j++) { // COLUMNS
            cout << "*";
        }
        
        // mid space
        cout << " ";
        
        // right part *
        for (int j = 1; j<= n-spaces; j++) { // COLUMNS
            cout << "*";
        }
        
        cout << endl; // ovo je UVIJEK novi red jer ovdje zavrsava crtanje jednog reda - druga FOR
    }
    cout << endl;
    
    

    
return 0;
}
