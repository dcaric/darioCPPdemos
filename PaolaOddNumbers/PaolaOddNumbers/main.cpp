#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    //WHILE LOOP (WEEK 4)
    /*
    int a,b;
    // 1) insert a and b
    cin >> a >> b;
    
    // 2) ensure a < b always
    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }
    
    
    // 3) special case when a + 1 >= b
    if ( a + 1 >= b) return 0;
    
    
    // 4) initialize num to a + 1
    int num = a + 1;
    
    
    // 5) loop over all numbers except last two
    while (num < b-2 && num > a) {
        if (num % 2 != 0 ) cout << num << ", ";
        num ++;
    }
    
    // 6) check last 2 numbers
    if (num % 2 != 0) cout << num;
    num ++;
    if (num % 2 != 0) cout << num;

    // 7) end of prog, go to the next line
    cout << endl;
    */
    
    //
    //  main.cpp
    //  TwoDigitNumber
    //
    //  Created by Dario Caric on 30.10.2023..
    //



        /*
        int number = 467826437;
        string strNum = to_string(number);
        
        for (int i=0; i<strNum.size(); i++) {
            cout << strNum[i] << endl;
        }
        */
        
        
        
        // 11
        /*
        int n = 3;
        int columns = n * 2;
        int a = 2;
        int b = columns - 1;
        
        for (int i=1; i<= columns; i++) {
            if (i == 1 || i == columns) cout << "*";
            else cout << " ";
        }
        cout << endl;
        
        for (int i=1; i<=n-2; i++) {
            for (int j=1; j<=columns; j++) {
                if (j == 1 || j == columns) cout << "*";
                else if (j == a || j == b) cout << "*";
                else cout << " ";
            }
            
            a ++;
            b --;
            cout << endl;
        }
       
      
        
        for (int i=1; i<=columns; i++) {
            cout << "*";
        }
        cout << endl;
        */
        
        
        // 12
        /*
        int n = 5;
        int rows = n * 2 - 1;
        int columns = rows;
        int a = n;
        int b = n;
        int constants = 1;
        
        for (int j=1; j<=rows; j++) {
            for (int i=1; i<=columns; i++) {
                if (i == a || i == b) cout << "*";
                else cout << " ";
            }
            a = a - constants;
            b = b + constants;
            if (a == 1) constants = - 1;
            cout << endl;
        }*/
         

        
        
        // 6
        /*
        cout << "Enter the money:";
        int money = 0;
        cin >> money;
        cout << "How many hours was your car parked:";
        int hours = 0;
        cin >> hours;
        int price = hours * 2;
        int returnMoney = money - price ;
        
        string strType = "bill";
        int amount = 10;
        int rest = 1;
        
        while (rest != 0) {
            int n = returnMoney / amount;
            
            for (int i=1; i<=n; i++) {
                cout << "Returning " << amount << " EUR " << strType << endl;
            }
            rest = returnMoney % amount;
            returnMoney = returnMoney - n * amount;
            
            switch (amount) {
                case 10:
                    amount = 5;
                    break;
                case 5:
                    amount = 2;
                    strType = "coin";
                    break;
                case 2:
                    amount = 1;
                    break;
                default:
                    break;
            }
        }*/
        
        
        
        // 20
        /*
        int width, height;
        cout << "Enter width:";
        cin >> width;
        cout << "Enter height:";
        cin >> height;
        
        bool hash = true;
        
        for (int i=1; i<=height; i++) {
            for (int j=1; j<=width; j++) {
                if (hash) cout << "#";
                else cout << "o";
                hash = !hash;
            }
            hash = !hash;
            cout << endl;
        }*/
    
    
    cout << "Inser how many numbers you will write:";
    int num;
    cin >> num;
    int a=0, b=0;
    bool firstnum = true;
    vector <vector<int>> myDict;
    int count = 0;
    
    cout << "Insert those numbers" << endl;
    
    for (int i=0; i<num; i++) {
        a = b;
        cin >> b;
        
        if ( b == (a + 1) || firstnum) {
            if (firstnum) {
                count ++;
                firstnum = false;
                myDict.push_back(vector<int>()); // *
            }
            myDict.back().push_back(b); // *
        }
        else {
            count ++;
            myDict.push_back(vector<int>()); // *
            myDict.back().push_back(b); // *
        }
        
    }
    cout << endl << "There are " << count  << " orders" << endl;
        

    for (int i=0; i<=count; i++) {
        //cout << "size: " << myDict[i].size() << endl;
        for (int j=0; j<myDict[i].size(); j++) {
            cout << myDict[i][j] << " ";
        }
        cout << endl;
    }
    
    

    
    
    /*
    cout << "Inser how many numbers you will write:";
    int num;
    cin >> num;

    vector<vector<int>> sequences;
    int lastNum = 0;
    int count = 0;
    bool isFirstNumber = true;

    cout << "Insert those numbers" << endl;
    for (int i = 0; i < num; i++) {
      int currentNum;
      cin >> currentNum;

      // Check if it's the first number or a consecutive number
      if (isFirstNumber || currentNum == lastNum + 1) {
          if (isFirstNumber) {
              sequences.push_back(vector<int>()); // Start a new sequence
              isFirstNumber = false;
              count++;
          }
          sequences.back().push_back(currentNum); // Add to the current sequence
      } else {
          sequences.push_back(vector<int>({currentNum})); // Start a new sequence
          count++;
      }
      lastNum = currentNum;
    }

    cout << endl << "There are " << count << " sequences" << endl;

    for (const auto &sequence : sequences) {
      for (int element : sequence) {
          cout << element << " ";
      }
      cout << endl;
    }
    */
    
    return 0;
}
