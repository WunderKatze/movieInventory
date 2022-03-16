// -------------------------------------------------- MovieInventory.cpp ----------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3/14/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Implememntion of MovieInventory
// --------------------------------------------------------------------------------------------------------------------
// Uses construct nodes, very simple. Operations like insert use object sorting mehtods
// -------------------------------------------------------------------------------------------------------------------- 

#include "MovieInventory.h"

// ------------------------------------------ operator<< ---------------------------------------------
// Description: adds genreInventories to output, essentially printing out an ordered list by genre of
// all movies in inventory
// Precondition: None
// ---------------------------------------------------------------------------------------------------
ostream& operator<<( ostream &output, const MovieInventory& mvInv) {
  for (int i = 0; i < GENRECOUNT; i++) {
    int genreKey = (int)GENREORDER[i]; // get key for genre
    output << "Genre " << GENREORDER[i] << "\n";
    if (mvInv.genreInventories.hasKey(genreKey)) {
      output << mvInv.genreInventories.getValue(genreKey) << "\n";
    }
  }
  return output;
}

// CONSTRUCTORS

// ------------------------------------------ MovieInventory() ---------------------------------------
// Description: Defualt constructor, defaults number of genres to 3
// Precondition: None
// ---------------------------------------------------------------------------------------------------
MovieInventory::MovieInventory() {}

// DESTRUCTOR

// ------------------------------------------ ~MovieInventory() --------------------------------------
// Description: Destructor calls destructors of inventoryByGenres in inventory
// Precondition: None
// ---------------------------------------------------------------------------------------------------
MovieInventory::~MovieInventory() {
  delete(genreInventories); // hashtable deconstructor destructs all objects inside
}

// MUTATORS

// ------------------------------------------ addMovie -----------------------------------------------
// Description: adds movie to appropriate inventory
// Precondition: None
// ---------------------------------------------------------------------------------------------------
void MovieInventory::addMovie(const Movie* movie) {
  int genreKey = (int)(movie->genre); // get key for genre
  genreInventories.getValue(genreKey).insertMovie(movie); //insert film into correct inventory
}