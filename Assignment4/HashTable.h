// -------------------------------------------------- HashTable.h -----------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3/14/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for a Hashtable class
// --------------------------------------------------------------------------------------------------------------------
// Very simple hash table with fixed size, uses double hashing
// --------------------------------------------------------------------------------------------------------------------

// Lightly Tested[X] - Ryan

#ifndef HASHTABLE
#define HASHTABLE
#include "InventoryByGenre.h"
#include <iostream>

using namespace std;

const int MAXSIZE = 211; // ideally this is the closest prime number that is larger than twice the intended number of entries

template <class obj>
class HashTable {

  public:
    // Constructor
    HashTable();

    // Destructor
    ~HashTable();
    
    // Accessors
    bool hasKey(const int key) const;
    obj* getValue(const int key) const;
    void printTable() const; // for testing
    
    // Mutators
    void insertKeyValuePair(const int key, obj* value);

  private:
    // vars
    int entries; // total number of entries in hash table
    // structs
    struct keyPair {
      int key;
      int i;
    };
    struct entryPair {
      int key;
      obj* value;
    };
    // Table
    entryPair* table[MAXSIZE] = {NULL};
    keyPair* keys[MAXSIZE] = {NULL}; // a list of active keys in the table used mainly to destruct the keypairs

    // Helpers
    int calculateHash(const int key); // generates index from id
    int hashFunction(const int key, const int i) const; // simply returns hash from hash function h(x,i)


};

#endif