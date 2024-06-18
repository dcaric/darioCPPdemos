#include <iostream>
#include <queue>
#include <vector>
#include <functional> // For greater

using namespace std;

int main() {
    // Max-heap priority queue (default)
    priority_queue<int> maxHeap;

    // Min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Adding elements to the max-heap
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);

    // Adding elements to the min-heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);

    // Displaying elements of the max-heap
    cout << "Max-Heap:" << endl;
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    // Displaying elements of the min-heap
    cout << "Min-Heap:" << endl;
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    return 0;
}

