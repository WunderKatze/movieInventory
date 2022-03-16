// -------------------------------------------------- Inventory.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for Inventory class
// --------------------------------------------------------------------------------------------------------------------
#ifndef INVENTORY
#define INVENTORY
#include "Movie.h"
#include "MovieInventoryManager.h"
using namespace std;
#include <iostream>
#include <iomanip> 
#include "Transaction.h"

class Inventory: public Transaction
{
public:
  Inventory();
  ~Inventory();

  virtual doTransaction(string, MovieInventory&);

};
#endif