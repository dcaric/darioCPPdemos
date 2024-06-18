//
//  main.cpp
//  Furnite_DifferentContainers
//
//  Created by Dario Caric on 01.06.2024..
//

#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted vectors

void merge(vector<int>& vec_a, vector<int>& vec_b, vector<int>& vec_c) {
    int na = vec_a.size();
    int nb = vec_b.size();
    vec_c.resize(na + nb); // Resize vec_c to hold the merged result
    int ia = 0, ib = 0, ic = 0;

    // gradi vec_c sa elementima od vec_a i vec_b tako da uzima
    // najmanji
    while (ia < na && ib < nb) {
        if (vec_a[ia] < vec_b[ib]) {
            vec_c[ic++] = vec_a[ia++];
        } else {
            vec_c[ic++] = vec_b[ib++];
        }
    }

    // JEDINO JE MOGUCE DA OSTANE 1 element u vec_a ili vec_b
    // zato jer se dijeli sa 2 i onda vec_a i vec_b imaju jednoko elementata
    // pa ove 2 while dole i ne stignu se izvrsiti nego se sve sredi u gornjoj while
    // ili se SAMO JEDNA od donjih while izvrsi
    
    // dodaje vec_a element u vec_c
    while (ia < na) {
        vec_c[ic++] = vec_a[ia++];
    }

    // dodaje vec_b element u vec_c
    while (ib < nb) {
        vec_c[ic++] = vec_b[ib++];
    }
}

// Function to perform Merge Sort
void merge_sort(vector<int>& arr) {
    
    // kad se vise ne moze dijeliti (ostao je 1 element)
    // posalje RETURN - prekid rekurzije za merge_sort
    if (arr.size() < 2) return;

    // dijeli listu na pola LEFT I RIGHT
    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    cout << "LEFT: ";
    for (int num : left) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "RIGHT: ";
    for (int num : right) {
        cout << num << " ";
    }
    cout << endl;
    
    // rekurzije salje sam sebi, LEFT i RIGHT liste, da se podijele na manje djelove
    // sve dokle se moze dijeliti, dok ne dodje do 1 elementa
    merge_sort(left);
    merge_sort(right);
    
    // kad se prime merge_sort sa listama od 1 elementa salje se RETURN
    // sa linije - if (arr.size() < 2) return;
    // izvrsavanje koda onda stigne na ovu liniju dole na merge funkciju
    // koja spaja sve sto dobije, kod spajanja usporedjuje elemente iz LEFT i RIGHT
    // liste i uzima od najmanjeg do najveceg elementa is pojedine liste
    
    merge(left, right, arr);
    cout << "Sorted: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}


int mainMerge() {
    // Example vector to be sorted
    vector<int> arr = {6, 12, 11, 7, 5, 13, 89};

    // Print the vector before sorting
    cout << "MERGE SORT: Unsorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Perform Merge Sort
    merge_sort(arr);

    // Print the vector after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
