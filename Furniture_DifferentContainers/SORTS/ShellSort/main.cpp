//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 01.06.2024..
//

#include <iostream>
#include <vector>

using namespace std;

// Function to perform Shell Sort
void shellSort(vector<int>& arr) {
    int n = arr.size();

    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {
        
        cout << "gap:" << gap << endl;

        
        // Perform a gapped insertion sort for this gap size
        for (int i = gap; i < n; ++i) {
            
            cout << "i:" << i << endl;
            cout << "before:" << endl;
            for (int num : arr) {
                cout << num << " ";
            }
            cout << endl;
            
            // Save arr[i] in temp and make a hole at position i
            int temp = arr[i];
            int j;

            // Shift earlier gap-sorted elements up until the correct location for arr[i] is found
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            // Put temp (the original arr[i]) in its correct location
            arr[j] = temp;
            
            
            cout << "after:" << endl;
            for (int num : arr) {
                cout << num << " ";
            }
            cout << endl;
            cout << "--------------------" << endl;
        }
    }
}

int main() {
    // Example array to be sorted
    vector<int> arr = {12, 34, 54, 2, 3};

    // Print the array before sorting
    cout << "SHELL SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Shell Sort
    shellSort(arr);

    // Print the array after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
