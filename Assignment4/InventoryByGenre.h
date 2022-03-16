// -------------------------------------------------- InventoryByGenre.h ----------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3/14/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for a BST class for Movies
// --------------------------------------------------------------------------------------------------------------------
// Uses construct nodes, very simple. Operations like insert use object sorting mehtods
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef INVBYGEN
#define INVBYGEN
#include "Movie.h"
#include <iostream>

using namespace std;

class InventoryByGenre {

  // This will print a sorted list of movies in the inventory using inOrder Traversal
  friend ostream& operator<<( ostream &output, const InventoryByGenre& inventory );

  public:
    // Constructors
    InventoryByGenre();
    InventoryByGenre(string genre);
    // Destructor
    ~InventoryByGenre();

    // Accessors
    bool hasMovie(const string movieString) const;
    
    // Mutators
    void insertMovie(Movie* movie);
    void borrowMovie(const string movieString);
    void returnMovie(const string movieString);

  private:
    struct BSTNode; // Forward refrence for compiler
    // Var
    string genre;
    BSTNode* root; // Contains movies in BST like structure
    int size; // simple int for tracking number of nodes
    // Structs
    struct BSTNode {
      Movie* data;
      BSTNode* right;
      BSTNode* left;
    };
    // Helpers
    void destructorHelper(BSTNode* node);
    ostream& outputHelper(ostream &output, const BSTNode* node);

};

#endif