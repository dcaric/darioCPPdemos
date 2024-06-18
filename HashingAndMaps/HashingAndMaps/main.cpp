//
//  main.cpp
//  HashingAndMaps
//
//  Created by Dario Caric on 09.06.2024..
//

#include <iostream>
#include<map>


using namespace std;



int main() {


    unordered_map<string, int> ageMap;

    // INSERTION
    // Insert key-value pairs into the map
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Access and print values using keys
    cout << "Alice's age: " << ageMap["Alice"] << endl;
    cout << "Bob's age: " << ageMap["Bob"] << endl;
    cout << "Charlie's age: " << ageMap["Charlie"] << endl;

    // Check if a key exists
    string name = "David";
    if (ageMap.find(name) != ageMap.end()) {
        cout << name << "'s age: " << ageMap[name] << endl;
    } else {
        cout << name << " is not in the map." << endl;
    }

    // Iterate over the map and print all key-value pairs
    for (const auto& pair : ageMap) {
        cout << pair.first << " : " << pair.second << endl;
    }

    // INSERTION
    ageMap.emplace("Marko", 35);
    ageMap.insert({"Dario", 25});
    // Iterate over the map and print all key-value pairs
    for (const auto& pair : ageMap) {
        cout << pair.first << " : " << pair.second << endl;
    }

    
    // DELETION
    ageMap.erase("Marko");
    // Iterate over the map and print all key-value pairs
    for (const auto& pair : ageMap) {
        cout << pair.first << " : " << pair.second << endl;
    }
    
    // ILI DELETING MALO KOPLICIRANIJE
    auto it = ageMap.find("Dario");
    if (it != ageMap.end()) {
        ageMap.erase(it);  // Erases the element pointed to by the iterator
    }
    
    
    // FINDING - SEARCHING
    auto it2 = ageMap.find("Charlie");
    if (it2 != ageMap.end()) {
        cout << "Found: " << it2->first << " -> " << it2->second << endl;
    } else {
        cout << "Key not found." << endl;
    }
    
    
    
    string key = "Paola";
    hash<string> hashFunction;
    size_t hashValue = hashFunction(key); // This is what unordered_map does internally

    cout << "Hash value for key '" << key << "': " << hashValue << endl;

    // Insert key-value pairs into the map
    ageMap[key] = 19;

    // Access and print values using keys
    cout << "Paola's age: " << ageMap[key] << endl;
    
    
    /*
     
     1. std::map
     Description: An associative container that stores elements in a sorted order based on keys.
     Underlying Data Structure: Typically implemented as a Red-Black Tree.
     Order: Elements are sorted by key.
     Complexity: O(log n) for insertions, deletions, and lookups.
     
     2. std::multimap
     Description: Similar to std::map, but allows multiple elements with the same key.
     Underlying Data Structure: Typically implemented as a Red-Black Tree.
     Order: Elements are sorted by key.
     Complexity: O(log n) for insertions, deletions, and lookups.
     
     
     
     HASH TABLE:
     
     3. std::unordered_map
     Description: An associative container that stores elements in an unordered fashion based on keys.
     Underlying Data Structure: Hash table.
     Order: Elements are not ordered.
     Complexity: Average O(1) for insertions, deletions, and lookups; worst-case O(n).
     
     4. std::unordered_multimap
     Description: Similar to std::unordered_map, but allows multiple elements with the same key.
     Underlying Data Structure: Hash table.
     Order: Elements are not ordered.
     Complexity: Average O(1) for insertions, deletions, and lookups; worst-case O(n).
     
     
     A hash table is a data structure that provides an efficient way to store, retrieve, 
     and manage data using key-value pairs. It uses a hash function to compute an index
     (or hash code) into an array of buckets or slots, from which the desired value
     can be found.
     
     Key Concepts
     
     Hash Function:
     A function that takes an input (or key) and returns an integer, known as a hash code.
     The hash code is used to index into an array where the corresponding value is stored.
     A good hash function distributes keys uniformly across the hash table to minimize collisions.
     
     Buckets:
     The array used in a hash table is often called the "buckets" or "slots".
     Each bucket can store multiple key-value pairs in case of collisions.
     
     
     Collisions:
     Occur when two different keys hash to the same index.
     Handled using techniques like chaining (linked lists within each bucket) or open addressing (finding another empty slot within the array).
     
     Load Factor:
     The ratio of the number of elements to the number of buckets.
     A higher load factor indicates more collisions and can degrade performance.
     Hash tables often resize (rehash) to maintain an optimal load factor.
     
     
     Operations
     
     Insertion: Insert a key-value pair into the hash table.
     Compute the hash code for the key using the hash function.
     Place the key-value pair in the appropriate bucket.
     
     Search: Retrieve the value associated with a given key.
     Compute the hash code for the key.
     Check the corresponding bucket and retrieve the value.
     
     Deletion: Remove a key-value pair from the hash table.
     Compute the hash code for the key.
     Find and remove the key-value pair from the appropriate bucket.
     
     
     
     
     STARO:
     containers:
     1) vector
     2) list - double linked list
     3) forward_list - single linked list
     4) queue - first in first out
     5) stack - rirst in last out

     
     
     */
    // *******************************************************************************
    
    
    unordered_map<int, int> myUnorderMap;
    myUnorderMap[1] = 1;
    myUnorderMap[2] = 24;
    myUnorderMap[3] = 234;
    myUnorderMap[4] = 4434;
    myUnorderMap[10] = 390782;
    
    myUnorderMap.insert({5, 534});
    myUnorderMap.insert(pair(6, 634));
    myUnorderMap.emplace(88, 6733);


    for(auto it = myUnorderMap.begin(); it != myUnorderMap.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    
    cout << endl << endl;
    
    unordered_map<int, string> myUnorderMap2;
    myUnorderMap2[1] = "jdhsj";
    myUnorderMap2[2] = "hjsjkdfhds";
    myUnorderMap2[3] = "jfdksjfskl";
    myUnorderMap2[4] = "jsfd";
    myUnorderMap2[10] = "djsdjs";
    
    myUnorderMap2.insert({5, "djsfds"});
    myUnorderMap2.insert(pair(6, "fjjfjfj"));
    

    for(auto it = myUnorderMap2.begin(); it != myUnorderMap2.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    
    
    
    cout << endl << endl;
    // *******************************************************************************
    // SAD MALO KOMPLICIRANIJI DICTIONARY (MAP)
    // *******************************************************************************

    unordered_map<int, pair<int, string>> myUnorderMap3;
    myUnorderMap3[1] = pair (22, "jdhsj");
    myUnorderMap3[2] = pair(245, "hjsjkdfhds");
    myUnorderMap3[3] = pair(23, "jfdksjfskl");
    myUnorderMap3[4] = pair(12, "jsfd");
    myUnorderMap3[10] = pair(1010, "djsdjs");
    
    myUnorderMap3.insert({5, {2323, "djsfds"}});
    myUnorderMap3.insert(pair(55, pair(6, "fjjfjfj")));
    

    hash<int> hashFunction3;

    for(auto it = myUnorderMap3.begin(); it != myUnorderMap3.end(); it++){
        cout << it->first << " "  << it->second.first << " " << it->second.second << endl;
        size_t hashValue3 = hashFunction3(it->first);

        cout << "hash: " << hashValue3 << endl << endl;

    }
    
    
    // DELETION
    myUnorderMap3.erase(3);
    
    
    
    
    
    
    return 0;
}
