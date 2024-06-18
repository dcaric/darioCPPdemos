#include <iostream>
#include <vector>

using namespace std;

// Function to perform Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 1; i < n; ++i) {
        
        cout << "i:" << i << endl;
        cout << "before:" << endl;
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
        
        int key = arr[i];
        int j = i - 1;
        
        // key pamti trenutni element
        // u while se provjeri da li je jedan prije element > key tj da je key je manji
        // ako je to ispunjeno pomakne sve lemente [0...i] za jedan desno
        // a onda na pocetak postavi key element (trenutni)
        // taj pocetak je na [j+1] a to ovisi koiko je j smanjivan unutar whila
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key; // na pocetno stavi element koji je na poziciji [i] (pocetni element za ovu iteraciju)
        
        cout << "after:" << endl;
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
        cout << "--------------------" << endl;
    }
}

int mainInsert () {
    // Example array to be sorted
    vector<int> arr = {12, 11, 13, 5, 6};

    // Print the array before sorting
    cout << "INSERTION SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Insertion Sort
    insertionSort(arr);

    // Print the array after sorting
    cout << "INSERTION SORT Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
