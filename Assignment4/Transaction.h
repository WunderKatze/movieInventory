// -------------------------------------------------- Transaction.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for Transaction class
// --------------------------------------------------------------------------------------------------------------------
#ifndef TRANSACTION
#define TRANSACTION
#include "Movie.h"
#include "MovieInventoryManager.h"
using namespace std;
#include <iostream>
#include <iomanip> 


class Transaction
{
public:
  Transaction(string transType, string transactionString);

  virtual doTransaction(string, MovieInventory&);

protected:
  string transType;
  string transactionString;

};
#endif

