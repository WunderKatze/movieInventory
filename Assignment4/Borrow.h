// -------------------------------------------------- Borrow.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for Borrow class
// --------------------------------------------------------------------------------------------------------------------
#ifndef BORROW
#define BORROW
#include "Movie.h"
#include "MovieInventory.h"
#include "Transaction.h"
using namespace std;
#include <iostream>
#include <iomanip> 

class Borrow: public Transaction
{
public:
  Borrow(int, string);

  virtual doTransaction(string, MovieInventory&);
private:
    int customerID;
    string MovieString

};
#endif