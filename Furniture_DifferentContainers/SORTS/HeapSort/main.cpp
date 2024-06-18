//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 01.06.2024..
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mainHeap() {
    // Example vector to be sorted
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    // Print the vector before sorting
    cout << "HEAP SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Convert the vector into a heap
    make_heap(arr.begin(), arr.end());

    // Sort the heap
    sort_heap(arr.begin(), arr.end());

    // Print the vector after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
