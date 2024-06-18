//
//  main.cpp
//  ZbrojNizaBr
//
//  Created by Dario Caric on 26.09.2021..
//

#include <iostream>
#include <string>

#include <sstream>
#include <vector>
#include <map>
#include <array>   

// global variables **********************************
using namespace std;
string globalnaVar = "Paola globalna";
const string globalnaVar2 = "Paola globalna";
// ***************************************************



// PREPROCESSOR *************************************
#define FUNCTION(name, a) int fun_##name() { return a;}
FUNCTION(fff, 2);

#define FUNCTIONSTR(name, a) string _##name() { return a;}
FUNCTIONSTR(paola, "Hello I'm Paola! ");

#define MIN(a,b) ((a<b) ? a : b)


// ***************************************************


/**
 * @brief This function returns sum of numbers
 *
 * 
 * @param rijecZaKraj - word for stop
 */
void leptirFunkcija(string rijecZaKraj) {


    string unos;
    printf("rijecZaKraj=%s \n", rijecZaKraj.c_str());

    const string konstant = "paola";

     while (unos != rijecZaKraj)  { 
        try
        {
            printf("\n Upiši broj:");
            cin >> unos;
            int suma  = 0;
            for (int i= 1; i<= stoi(unos); i ++) suma = suma +i;
            printf("Zbroj brojeva je: %i \n", suma);
        }
        catch(const std::exception& error)
        {
            if (unos != rijecZaKraj) printf("Upisao si krivi podatak. Rijec se ne moze pretvoriti u broj ili ta rijes nije %s !\n",rijecZaKraj.c_str());
        }
    }
    
}

int oduzmiDvaBroja(int a, int b) {
    return a - b;
}

/**
 * @brief Ispisuje rijec po rijec koristeci vector i map i broji koliko se neka rijec ponavlja
 * 
 */
void ispisRijeci() {
    string recenica = "";
    string jednaRijec = "";

    string myArray[] = {"dario", "paola"};
    myArray->append("macka");
    
    vector<string> rijeci; // vektor stringova (polje stringova)
    map<string, int> myMap; // mapa stringova

    cin.ignore();
    printf("Upisi jednu recenicu:");
    getline(cin, recenica);

    printf("\n");
    stringstream myStream(recenica); // stringstream razlomi recenicu u niz rijeci nakon svakog SPACA - posebni tip podatka stream


    while (myStream >> jednaRijec)
    {
        rijeci.push_back(jednaRijec);
        //myMap[jednaRijec] = myMap[jednaRijec] + 1;
        myMap[jednaRijec]++;
        //printf("%s\n", jednaRijec.c_str());
    }
    printf("\n");

    printf("Prva i zadnja rijec preko VECTOR-a\n");
    printf("===================================\n");
    printf("prva rijec: <%s> \n", rijeci.begin()->c_str());
    printf("zadnja rijec: <%s> \n", rijeci.end()->c_str());
    printf("rijeci size: %i \n\n", rijeci.size());

    printf("Prva i zadnja rijec preko MAPS\n");
    printf("===================================\n");
    printf("prva rijec: <%s> \n", myMap.begin()->first.c_str());
    printf("zadnja rijec: <%s> \n", myMap.end()->first.c_str());
    printf("rijeci size: %lu \n\n", myMap.size());


    // printanje rijeci po rijec pomocu vektora
    for (auto i=rijeci.begin(); i != rijeci.end(); i++)
    {
        printf("%s ", i->c_str());
    }
    printf("\n\n");

    // printanje rijeci po rijec pomocu mape
    for (auto i=myMap.begin(); i != myMap.end(); i++)
    {
        printf("rijec <%s> u recenici se ponavlja %i puta \n", i->first.c_str(), i->second);
    }
    
}

// MAIN PART
int main(int argc, const char * argv[]) {

    printf("Printamo funkciju fff: %i \n", fun_fff());

    printf("Printamo funkciju paola: %s \n", _paola().c_str());

    printf("Minimum izmedju 23 i 45 je:%i \n\n", MIN(23, 45));


    //string izborString;
    char izbor;
    
    printf("\n Upiši:");
    printf("\n s - za sumu niza");
    printf("\n o - za oduzeti 2 broja: ");
    printf(" \n t - za ispisati rijec po rijec \n");
    //getline(cin, izbor);    
    cin >> izbor;
    //printf("izbor=%c \n", izbor);

    switch (izbor)
    {
    case 's':
        {
            printf("\n Upiši riječ za prekinuti program:");
            string stopRijec;
            printf("stopRijec=%s \n", stopRijec.c_str());
            cin.ignore();
            getline(cin, stopRijec);
            leptirFunkcija(stopRijec);
        }
        break;
    case 'o':
        {
            printf("\n Upiši prvi broj");
            int brojA;
            cin >> brojA;
            printf("\n Upiši drugi broj");
            int brojB;
            cin >> brojB;
            printf("Rezultat je: %i \n", oduzmiDvaBroja(brojA, brojB));
        }
        break;
    case 't':
        {
            ispisRijeci();
        }
        break;
    default:
        printf("Nisi upisala nista od opcija !");
        break;
    }

    


/*     SWITCH (izbor)
        CASE ("suma niza")
                printf("\n Upiši riječ za prekinuti program:");
                string stopRijec;
                getline(cin, stopRijec);
                leptirFunkcija(stopRijec);
                BREAK
        CASE ("zbroj")
                printf("\n Upiši prvi broj");
                int brojA;
                cin >> brojA;
                printf("\n Upiši drugi broj");
                int brojB;
                cin >> brojB;
                printf("Rezultat je: %i \n", oduzmiDvaBroja(brojA, brojB));
                BREAK
        DEFAULT
            printf("Nisi upisala nista od opcija !");
    END */

  
    printf("PROGRAM JE GOTOV \n");
}