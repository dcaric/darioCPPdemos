//
//  main.cpp
//  SetMap
//
//  Created by Dario Caric on 30.05.2024..
//

#include <iostream>
#include <set>


using namespace std;

int main3() {

    cout << "SET" << endl;
    
    set<int> s({ 55, 11, 55, 33, 22, 44 });
    cout << s.size() << endl;
    
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    
    // INSERTION INTO SET
    auto ir = s.insert(11);
    cout << "Inserted: 11 at index " << ir.second << endl;
    ir = s.insert(66);
    cout << "Inserted: 66 at index " << ir.second << endl;
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    // ERASING FROM THE SET
    s.erase(s.begin());
    s.erase(33);
    cout << "Erased from the SET the last and the first elements" << endl;
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    
    cout << endl;
    cout << "MULTISET" << endl;
    multiset<int> ms({ 22, 11, 55, 22, 33, 22, 44 });

    auto it = ms.find(22);
    cout << *it << endl;

    auto range = ms.equal_range(22);
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    cout << endl;
    cout << "MAP" << endl;
    // Preparing.
    int n = 100000;
    vector<int> v(n);

    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    set<int> myset(v.begin(), v.end());

    
    
    // measuring time needed to find element inside VECTOR
    auto begin = chrono::high_resolution_clock::now();
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it == n) {
            cout << "Found in vector" << endl;
            break;
        }
    }
    auto end = chrono::high_resolution_clock::now();
    cout
        << "Vector: "
        << chrono::duration_cast<chrono::microseconds>(end - begin).count() << " ms" << endl;

    
    // measuring time needed to find element inside SET
    begin = chrono::high_resolution_clock::now();
    if (myset.find(n) != myset.end()) {
        cout << "Found in set" << endl;
    }
    end = chrono::high_resolution_clock::now();
    cout
        << "Set: "
        << chrono::duration_cast<chrono::microseconds>(end - begin).count() << " ms" << endl;

    
    return 0;
}
