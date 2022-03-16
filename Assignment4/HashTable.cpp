// -------------------------------------------------- HashTable.cpp ---------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3/14/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - implementation for a Hashtable class
// --------------------------------------------------------------------------------------------------------------------
// Very simple hash table with fixed size, uses double hashing
// --------------------------------------------------------------------------------------------------------------------

#include "HashTable.h"

// ------------------------------------------ operator<< ---------------------------------------------
// Description: operater <<, just adds all entries in order to output, used for testing
// Precondition: None
// ---------------------------------------------------------------------------------------------------

// CONSTRUCTORS

// ------------------------------------------ HashTable() --------------------------------------------
// Description: Defualt constructor
// Precondition: None
// ---------------------------------------------------------------------------------------------------
template <class obj>
HashTable<obj>::HashTable() {
  entries = 0;
}

// DESTRUCTOR

// ------------------------------------------ ~HashTable() -------------------------------------------
// Description: Destructor deletes all entryPairs on record, this includes deleting the object pointed
// to in entryPairs
// Precondition: None
// ---------------------------------------------------------------------------------------------------
template <class obj>
HashTable<obj>::~HashTable() {

  for(int j = 0; j < entries; j++) { // iterate through keys and delete stored objects
    // get key and i pair for keys in keys and create index of entry on table
    int index = hashFunction(keys[j]->key, keys[j]->i);

    //Open entry pair and delete it
    entryPair* entry = table[index];
    delete(entry->value);
    entry->value = nullptr;
    delete entry;
    table[index] = nullptr;

    //delete key record
    delete keys[j];
  }
}

// ACCESSORS

// ------------------------------------------ hasKey -------------------------------------------------
// Description: Returns True if a entryPair exists for key
// Precondition: None
// ---------------------------------------------------------------------------------------------------
template <class obj>
bool HashTable<obj>::hasKey(const int key) const {
  int i = 0;
  while(i < MAXSIZE) {
    if(table[hashFunction(key, i)] == nullptr) {
      return false;
    }
    else if (table[hashFunction(key, i)]->key == key) {
      return true;
    }
    i++;
  }
  return false;
}

// ------------------------------------------ getValue -----------------------------------------------
// Description: returns pointer to object stored in key's entryPair
// Precondition: table has entry for key
// ---------------------------------------------------------------------------------------------------
template <class obj>
obj* HashTable<obj>::getValue(const int key) const {
  int i = 0;
  while(i < MAXSIZE) {
    if(table[hashFunction(key, i)] == nullptr) {
      return NULL;
    }
    else if (table[hashFunction(key, i)]->key == key) {
      return table[hashFunction(key, i)]->value;
    }
    i++;
  }
  return NULL;
}

// ------------------------------------------ printTable ---------------------------------------------
// Description: prints all entries in sequence
// Precondition: None
// ---------------------------------------------------------------------------------------------------
template <class obj>
void HashTable<obj>::printTable() const {
  for(int i=0; i < MAXSIZE; i++) {
    if (table[i] != nullptr) {
      cout << i << "  " << table[i]->key << "  "  << table[i]->value << endl;
    }
    else {
      cout << i << "  " << "None" << endl;
    }
  }
}

// MUTATORS

// ------------------------------------------ insertKeyValuePair -------------------------------------
// Description: inserts the key value pair and updates the number of keys and key list
// Precondition: table does not already have entry for key
// ---------------------------------------------------------------------------------------------------
template <class obj>
void HashTable<obj>::insertKeyValuePair(const int key, obj* value) {
  // Create new entryPair
  entryPair* newEntry = new entryPair();
  newEntry->key = key;
  newEntry->value = value;

  // Calculate hash
  int index = calculateHash(key); // updates the entries and keys

  // Insert entryPair
  table[index] = newEntry;
}

// HELPERS

// ------------------------------------------ calculateHash ------------------------------------------
// Description: Calculates a index based on the key and checks for collisions
// Precondition: None
// ---------------------------------------------------------------------------------------------------
template <class obj>
int HashTable<obj>::calculateHash(const int key) {
  int i = 0;
  int index;
  bool uniqueHash = false;
  while(i < MAXSIZE) {
    index = hashFunction(key, i);
    if(table[index] == nullptr) {
      keyPair* newKey = new keyPair();
      newKey->key = key;
      newKey->i = i;
      keys[entries] = newKey;
      entries = entries + 1;
      return index;
    }
    i++;
  }
  return -1;
}

// ------------------------------------------ hashFunction -------------------------------------------
// Description: Takes in key and i and preforms hash function using double hashing
// Precondition: None
// ---------------------------------------------------------------------------------------------------
template <class obj>
int HashTable<obj>::hashFunction(const int key, const int i) const {
  return ( key%MAXSIZE + i * ( 7 - (key%7 ) ) )%MAXSIZE;
}


// instructions for compiler
template class HashTable<int>;
template class HashTable<InventoryByGenre>;