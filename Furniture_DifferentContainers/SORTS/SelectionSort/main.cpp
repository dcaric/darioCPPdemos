//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 31.05.2024..
//

#include <iostream>
#include <vector>


using namespace std;

// Function to perform Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        
        cout << "i:" << i << endl;
        cout << "before:" << endl;
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
        
        // za element na i-tom mjestu
        // trazi najmanji element od preostalih [i+1..<n] elemenata kad nadje
        // njegov index spremi u minIndex
        // nakon FORa swapa elemente na i-tom i minIndex mjestima
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // sad swapa i-ti element s tim na minIndex
        swap(arr[i], arr[minIndex]);
        
        cout << "after:" << endl;
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
        cout << "--------------------" << endl;
    }
}

int mainSelect() {
    // Example array to be sorted
    vector<int> arr = {64, 25, 12, 22, 15};

    // Print the array before sorting
    cout << "SELECTION SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Selection Sort
    selectionSort(arr);

    // Print the array after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
