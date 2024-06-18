//
//  main.cpp
//  StringReverse
//
//  Created by Dario Caric on 11.06.2024..
//

#include <iostream>
#include <string>

using namespace std;

void strReverse (string *str) {
    // kad je size stringa == 0 onda je kraj
    if (str->length() == 0) {
        return;
    }
    
    // printa zadnje slovo stringa, za to su back i front super jer ne moras znati
    // size pa onda ne treba komplicirati sa str[0] za prvi
    // i jos gore sa str[koliki_je_size - 1] za zadnji
    cout << str->back();
    // sad se makne iz sringa zadnji i na taj nacin prezadnji postaje zadnji (priprema za drugi krug rekurzije)
    str->pop_back();
    // sad se posalje samom sebi izmijenjeni strig, tj bez zadnjeg slova
    strReverse(str);
}


void strForward( string str) {

    if (str.length() == 0) {
        return;
    }
    
    // prinat se prvi znak
    cout << str.front();
    // brise se od indexa = 0 jedan znak tj taj prvi pa onda na taj
    // nacin string se smanjuje od pocetka za jedan znak
    str.erase(0, 1);
    // posalje se sam sebi string za novi krug
    strForward(str);
    
}


int main() {
    
    
    string str = "hello world!";
    strReverse(&str);
    cout << endl;
    
    
    str = "hello world!"; // moram ponovo unjeti jer je strReverse brisala znak po znak iz stringa
    strForward(str);
    cout << endl;
    

    return 0;
}
