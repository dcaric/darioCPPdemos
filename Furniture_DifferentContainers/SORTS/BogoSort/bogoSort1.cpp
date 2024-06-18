#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

// n factorial
int nfact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
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
    vector<int> v({ 5, 3, 1, 2, 4 });
    int n = nfact(v.size());
    for (int i = 0; i < n; i++) {
        std::cout << v[0] << ' ' << v[1] << ' ' << v[2] << ' ' <<                                                v[3] << ' ' << v[4];
        cout << " (" << next_permutation(v.begin(), v.end()) << ")"
                                                             << endl;
    };

    // Print the vector after sorting
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
