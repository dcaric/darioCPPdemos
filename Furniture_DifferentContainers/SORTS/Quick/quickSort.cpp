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
void quickSort(vector<int>& arr, int left, int right) {

    if (right <= left) {
        return;
    }
    
    int pivot = arr[left];
    int i = left + 1;
    int j = right;
    
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
        }
    }

    swap(arr[left], arr[j]);
    
    quickSort(arr, left, j - 1);
    quickSort(arr, j + 1, right);
}

int mainQuickSort() {
    // Example vector to be sorted
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    // Print the vector before sorting
    cout << "QUICK SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Quick Sort
    quickSort(arr, 0, arr.size() - 1);

    // Print the vector after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
