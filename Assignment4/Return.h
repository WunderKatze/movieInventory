// -------------------------------------------------- Return.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for Return class
// --------------------------------------------------------------------------------------------------------------------
#ifndef RETURN
#define RETURN
#include "Movie.h"
#include "MovieInventoryManager.h"
using namespace std;
#include <iostream>
#include <iomanip> 

class Return: public Transaction
{
  public:
    Return();
    ~Return();
  
    virtual doTransaction(string, MovieInventory&);
  private:
    int customerID;
    string MovieString
};
#endif