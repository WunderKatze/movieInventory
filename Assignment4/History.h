// -------------------------------------------------- History.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for History class
// --------------------------------------------------------------------------------------------------------------------
#ifndef HISTORY
#define HISTORY
#include "Movie.h"
#include "MovieInventoryManager.h"
#include "Transaction.h"
using namespace std;
#include <iostream>
#include <iomanip> 

class History: public Transaction
{
public:
  History(int customerID);
  ~History();

  virtual doTransaction(string, MovieInventory&);

private:
  string customerID;

};
#endif