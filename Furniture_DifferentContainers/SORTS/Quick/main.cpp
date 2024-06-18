//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 01.06.2024..
//

#include <iostream>
#include <vector>

using namespace std;


// Function to perform Quick Sort
void quick_sort(vector<int>& arr, int left, int right) {
    cout << "left:" << left << " right:" << right << endl;

    if (right <= left) {
        return;
    }
    
    int pivot = arr[left];
    int i = left + 1;
    int j = right;
    
    
    //********************************************
    cout << "i:" << i << " pivot:" << pivot << " j:" << j << endl;
    cout << "before:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    //********************************************

    
    while (i <= j) {
        while (i <= right && arr[i] <= pivot) { // Move i to right.
            i++;
        }
        while (j > left && arr[j] > pivot) { // Move j to left.
            j--;
        }
        cout << "\t i:" << i << " pivot:" << pivot << " j:" << j << endl;
        if (i < j) {
            swap(arr[i], arr[j]);
            
            //********************************************
            cout << "1) after swap: " << i << " with " << j << endl;
            for (int num : arr) {
                cout << num << " ";
            }
            cout << endl;
            //********************************************
        }
    }

    swap(arr[left], arr[j]);
    
    
    //********************************************
    cout << "2) after swap: " << left << " with " << j << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    cout << "--------------------" << endl;
    //********************************************

    
    quick_sort(arr, left, j - 1);
    quick_sort(arr, j + 1, right);
}

int mainQuick() {
    // Example vector to be sorted
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    // Print the vector before sorting
    cout << "QUICK SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Quick Sort
    quick_sort(arr, 0, arr.size() - 1);

    // Print the vector after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
