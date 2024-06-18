#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if the vector is sorted
bool isSorted(const vector<int>& arr) {
    // provjeri da li je niz poredan po redu
    
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to perform Bogo Sort using permutations
void bogoSort(vector<int>& arr) {
    // Check if the array is sorted (it will be sorted initially)
    if (isSorted(arr)) {
        return;
    }

    // Generate permutations until the array is sorted
    while (!isSorted(arr)) {
        
        // napravi neku slucajnu permutaciju u nadi
        // da ce pogoditi to jednu di su svi poredani
        next_permutation(arr.begin(), arr.end());
        
        cout << "Next permutation" << endl;
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int mainBogo() {
    // Example vector to be sorted
    vector<int> arr = {3, 2, 5, 1, 4};

    // Print the vector before sorting
    cout << "BOGO SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Bogo Sort
    bogoSort(arr);

    // Print the vector after sorting
    cout << "Sorted array: ";
    for (auto num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
