//
//  main.cpp
//  PaolaBoard
//
//  Created by Dario Caric on 25.10.2023..
//

#include <iostream>

using namespace std;

const int e1x = 2;
const int e1y = 4;

const int e2x = 4;
const int e2y = 3;

const int tx = 5;
const int ty = 5;

void board (int x, int y) {
    cout << "!---!---!---!---!---!" << endl;
    for (int i = 5; i>=1; i--) {
        for (int j=1; j<=6; j++) {
            if ((j == e1x && i == e1y)) cout << "! x ";
            else if ((j == e2x && i == e2y)) cout << "! x ";
            else if ((j == tx && i == tx)) cout << "! * ";
            else if ((x == j && y == i)) cout << "! + ";
            else cout << "!   ";
        }
        cout << endl << "!---!---!---!---!---!" << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    
    char direction = ' ';
    int x = 1, y = 1;

    while (direction != 'e') {

        switch (direction) {
            case 'a':
                x--;
                break;
            case 'd':
                x++;
                break;
            case 'w':
                y++;
                break;
            case 's':
                y--;
                break;
            default:
                break;
        }
        
        
        board(x,y);
        //printf("%d  %d\n", x, y);

        // conditions
        if (x > 5 || x < 0) {
            cout << "END GAME !" << endl;
            return 0;
        }
        if (y > 5 || y < 0) {
            cout << "END GAME !" << endl;
            return 0;
        }
        
        if (x == e1x && y == e1y) {
            cout << "END GAME !" << endl;
            return 0;
        }
        
        if (x == e2x && y == e2y) {
            cout << "END GAME !" << endl;
            return 0;
        }
        
        if (x == tx && y == ty) {
            cout << "YOU WIN THE GAME !" << endl;
            return 0;
        }
        cin >> direction;

    }

    cout << endl;
    return 0;
}
