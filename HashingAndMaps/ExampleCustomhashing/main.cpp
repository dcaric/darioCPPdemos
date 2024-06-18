#include <iostream>
#include <vector>
#include <list>
#include <utility> // for std::pair

using namespace std;

/*
 Let's take keys from 1 to 100 and place them in our own simple implementation
 of a hash table with chaining (the value should be the square of the key).
 We use the hash function h(key) = key % 31. Let's display the distribution
 of keys by buckets and demonstrate the search.
 */

class HashTableNums {
public:
    HashTableNums(int size) {
        table.resize(size);
    }
    
    // Hash function
    int hashFunction(int key) {
        return key % table.size();
    }

    // Insert function
    void insert(int key, int value) {
        int hashValue = hashFunction(key);
        table[hashValue].emplace_back(key, value);
        //table[hashValue].push_back({key, value});
    }

    // Search function
    int search(int key) {
        int hashValue = hashFunction(key);
        for (const auto& pair : table[hashValue]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return -1; // Key not found
    }
    
    // find by hash
    void searchByHash(int hashKey) {

        for (const auto& pair : table[hashKey]) {
            cout << "{" << pair.first << ", " << pair.second << "} ";
        }
        cout << endl;
    }

    // Display function
    void display() {
        for (int i = 0; i < table.size(); ++i) {
            cout << "Bucket " << i << ": ";
            for (const auto& pair : table[i]) {
                cout << "{" << pair.first << ", " << pair.second << "} ";
            }
            cout << endl;
        }
    }

private:
    vector<list<pair<int, int>>> table;
};

int mainHasNums() {
    HashTableNums hashTable(31);

    // Insert keys from 1 to 100 with values as their squares
    for (int i = 1; i <= 100; ++i) {
        hashTable.insert(i, i * i);
    }

    // Display the hash table
    hashTable.display();

    // Demonstrate search
    cout << endl;
    int keyToSearch = 25;
    int value = hashTable.search(keyToSearch);
    if (value != -1) {
        cout << "Value for key " << keyToSearch << " is " << value << endl;
    } else {
        cout << "Key " << keyToSearch << " not found" << endl;
    }
    
    cout << endl;
    
    int keySecond = 56;
    cout << "Value for the key " << keySecond << " is " << hashTable.search(keySecond) << endl << endl;
    
    // search by hash
    int hashKey = 20;
    cout << "Bucket for the hash [" << hashKey << "] is ";
    hashTable.searchByHash(hashKey);
    cout << endl;

    return 0;
}
