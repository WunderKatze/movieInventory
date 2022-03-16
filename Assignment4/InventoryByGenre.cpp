// -------------------------------------------------- InventoryByGenre.cpp --------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3/14/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - implementation for a BST class for storing Movies in a sorted way
// --------------------------------------------------------------------------------------------------------------------
// Uses construct nodes, very simple. Operations like insert use object sorting mehtods
// --------------------------------------------------------------------------------------------------------------------

#include "InventoryByGenre.h"

// ------------------------------------------ operator<< ---------------------------------------------
// Description: traverses tree in order and adds data to output
// Precondition: None
// ---------------------------------------------------------------------------------------------------
ostream& operator<<( ostream &output, const InventoryByGenre& inventory ) {
  
  return outputHelper(output, inventory.root);
}

// ------------------------------------------ InventoryByGenre() -------------------------------------
// Description: default constructor
// Precondition: None
// ---------------------------------------------------------------------------------------------------
InventoryByGenre::InventoryByGenre() {
}

// ------------------------------------------ InventoryByGenre(string) -------------------------------
// Description: Constructor sets genre. Very important to use this one
// Precondition: None
// ---------------------------------------------------------------------------------------------------
InventoryByGenre::InventoryByGenre(string genre) {
  this->genre = genre;
}

// ------------------------------------------ ~InventoryByGenre() ------------------------------------
// Description: Destructor traverses and deletes nodes using inorder traversal
// Precondition: None
// ---------------------------------------------------------------------------------------------------
InventoryByGenre::~InventoryByGenre() {
  if (root != nullptr) {
    destructorHelper(root);
  }
}

// ACCESSORS

// ------------------------------------------ hasMovie -----------------------------------------------
// Description: Checks if movie exists by string
// Precondition: None
// ---------------------------------------------------------------------------------------------------
bool InventoryByGenre::hasMovie(const string movieString) const {
  return true;
}

// MUTATORS

// ------------------------------------------ insertMovie --------------------------------------------
// Description: Takes movie object, creates tree node and inserts into tree
// Precondition: None
// ---------------------------------------------------------------------------------------------------
void InventoryByGenre::insertMovie(Movie* movie) {
  // create new BSTNode
  BSTNode* newNode = new BSTNode();
  newNode->data = movie;
  newNode->right = nullptr;
  newNode->left = nullptr;
  
  // base case where root is null
  if (root == nullptr) {
    root = newNode;
    return;
  }
  
  // insert
  BSTNode* node = root;
  while(true) {
    if (node->data == movie) { // if equal too...
      // delete unused BSTNode
      delete(newNode->data);
      delete(newNode);
      return; // fails because movie already exists
    } else if (node->data > movie) { // if smaller than node...
      if (node->left == nullptr) {
        node->left = newNode;
        size++;
        return;
      } else {
        node = node->left;
      }
    } else if (node->data < movie) { // if larger than node...
      if (node->right == nullptr) {
        node->right = newNode;
        size++;
        return;
      } else {
        node = node->right;
      }
    }
  }
}

// ------------------------------------------ borrowMovie --------------------------------------------
// Description: finds movie by string and decreases stock by 1
// Precondition: None
// ---------------------------------------------------------------------------------------------------
void InventoryByGenre::borrowMovie(const string movieString) {
  
  while()
  return;
}

// ------------------------------------------ returnMovie --------------------------------------------
// Description: find movie by string and increases stock by 1
// Precondition: None
// ---------------------------------------------------------------------------------------------------
void InventoryByGenre::returnMovie(const string movieString) {
  return;
}

// HELPERS

// ------------------------------------------ destructorHelper ---------------------------------------
// Description: Recursive helper for destructing BST using postOrder traverse
// Precondition: None
// ---------------------------------------------------------------------------------------------------
void InventoryByGenre::destructorHelper(BSTNode* node) {
  // base cases
  if(node == nullptr) {
    return;
  }
  // post order traversal and deletion of nodes
  destructorHelper(node->right);
  destructorHelper(node->left);
  delete(node->data); // data is a pointer and must be deleted seperately
  delete(node);
}

// ------------------------------------------ outputHelper -------------------------------------------
// Description: Recursive helper for operater<< overide that uses inorder traversal to put movies into
// output in order
// Precondition: None
// ---------------------------------------------------------------------------------------------------
ostream& InventoryByGenre::outputHelper(ostream &output, const BSTNode* node) {
  //base cases
  if (node == nullptr) {
    return output;
  }
  outputHelper(output, node->left);
  output << *(node->data); // relies on movie override
  outputHelper(output, node->right);
}