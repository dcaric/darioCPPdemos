//
//  main.cpp
//  HeapQueue
//
//  Created by Dario Caric on 29.05.2024..
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    
    
    // HEAP
    
    vector<int> v({ 33, 11, 22, 88, 77, 55, 44, 33, 22, 66 });
    make_heap(v.begin(), v.end());
    for (unsigned i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    v.push_back(99);
    for (unsigned i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    push_heap(v.begin(), v.end());
    for (unsigned i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    pop_heap(v.begin(), v.end());
    v.pop_back();  // Actually remove the last element from the vector
    for (unsigned i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << endl;

    
    
    // PRIORITY QUEUE
    vector<int> numbers({ 33, 11, 22, 88, 77, 55, 44, 33, 22, 66 });

    priority_queue<int> pq(numbers.begin(), numbers.end());

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    
    
    vector<int> numbers1({ 17, 6, 99, 52, 11, 1, 8, 15, 7, 23 });

    priority_queue<int, vector<int>, greater<int>> pq1(numbers1.begin(), numbers1.end());
    
    /**
     •    int: The type of elements stored in the priority queue.
     •    vector<int>: The underlying container used to store the elements. By default, priority_queue uses vector.
     •    greater<int>: A comparison function object (functor) that changes the priority from the largest element to the smallest element. This makes the priority queue act as a min-heap.
     
     By specifying greater<int>, you instruct the priority queue to use the > operator to compare elements. This effectively turns the max-heap into a min-heap. When you print and pop the elements, they are printed in ascending order (smallest to largest):
     
     Summary

         •    priority_queue<int>: A max-heap where the largest element is at the top.
         •    priority_queue<int, vector<int>, greater<int>>: A min-heap where the smallest element is at the top.
     */

    while (!pq1.empty()) {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;

    return 0;
}
