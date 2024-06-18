#include <iostream>
#include <unordered_map>
#include <string>
#include <list>

using namespace std;

class HashTable {
public:
    // Insert function
    void insert(int key, const string& value) {
        int hashValue = hashFunction(key);
        table[hashValue].emplace_back(key, value);
    }

    // Delete function
    void remove(int key) {
        int hashValue = hashFunction(key);
        auto& cell = table[hashValue];
        for (auto it = cell.begin(); it != cell.end(); ++it) {
            if (it->first == key) {
                cell.erase(it);
                return;
            }
        }
        cout << "Key not found: " << key << endl;
    }

    // Search function
    string search(int key) {
        int hashValue = hashFunction(key);
        auto& cell = table[hashValue];
        for (const auto& pair : cell) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return "Key not found";
    }

    // Display function
    void display() {
        for (const auto& bucket : table) {
            cout << "Index " << bucket.first << ": ";
            for (const auto& pair : bucket.second) {
                cout << "{" << pair.first << ", " << pair.second << "} ";
            }
            cout << endl;
        }
    }

private:
    unordered_map<int, list<pair<int, string>>> table;
    
    // Hash function
    int hashFunction(int key) {
        return key % 7;
    }
};

int mainHashString() {
    HashTable hashTable;

    // Insert data
    hashTable.insert(1, "Danijel Subašić");
    hashTable.insert(2, "Lovre Kalinić");
    hashTable.insert(3, "Dominik Livaković");
    hashTable.insert(4, "Vedran Ćorluka");
    hashTable.insert(6, "Domagoj Vida");
    hashTable.insert(7, "Ivan Strinić");
    hashTable.insert(8, "Šime Vrsaljko");
    hashTable.insert(9, "Josip Pivarić");
    hashTable.insert(10, "Tin Jedvaj");
    hashTable.insert(11, "Dejan Lovren");
    hashTable.insert(12, "Matej Mitrović");
    hashTable.insert(13, "Luka Modrić (C)");
    hashTable.insert(14, "Ivan Rakitić");
    hashTable.insert(15, "Ivan Perišić");
    hashTable.insert(16, "Mateo Kovačić");
    hashTable.insert(17, "Marko Rog");
    hashTable.insert(18, "Marcelo Brozović");
    hashTable.insert(19, "Milan Badelj");
    hashTable.insert(20, "Mario Mandžukić");
    hashTable.insert(21, "Nikola Kalinić");
    hashTable.insert(22, "Andrej Kramarić");
    hashTable.insert(23, "Marko Pjaca");

    // Display the hash table
    hashTable.display();

    cout << endl;
    // find "Luka Modrić"
    cout << "Luka Modrić: " << hashTable.search(13) << endl;
    
    

    return 0;
}
