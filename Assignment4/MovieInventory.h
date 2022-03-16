// -------------------------------------------------- InventoryByGenre.h ----------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3/14/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for a BST class for Movies
// --------------------------------------------------------------------------------------------------------------------
// Uses construct nodes, very simple. Operations like insert use object sorting mehtods
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef MOVIEINV
#define MOVIEINV
#include "InventoryByGenre.h" // This includes the definition of movie from movie.h
#include "HashTable.h" // used for storing InventoriesByGenres
#include <iostream>

using namespace std;

const int GENRECOUNT = 3; // total number of genres
const char GENREORDER[GENRECOUNT] = {'F', 'D', 'C'}; // this determines the order they are printed in

class MovieInventory {

  // This will print a sorted list of movies in the inventory first Comedy, Dramas then Classics
  friend ostream& operator<<(ostream &output, const MovieInventory& inventory);

  public:
    // Constructor
    MovieInventory();
    // Destructor
    ~MovieInventory();

    // Accessors
    // NONE
    
    // Mutators
    void addMovie(const Movie* movie);
    void borrowMovie(const string movieString);
    void returnMovie(const string movieString);

  private:
    // vars
    int genres; // counts the number of genres are being tracked
    HashTable<InventoryByGenre> genreInventories; // hashtable containing inventories for each genre
    // the keys of this hashtable with be the ascii of the letter code of the genre

};

#endif