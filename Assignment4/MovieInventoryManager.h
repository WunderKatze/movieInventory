// -------------------------------------------------- MovieInventoryManager.h -----------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3/14/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for a Manager for movie inventory
// --------------------------------------------------------------------------------------------------------------------
// Manager for movie inventory
// --------------------------------------------------------------------------------------------------------------------
#ifndef MOVINVMGR
#define MOVINVMGR
#include <iostream>
#include <fstream>
#include <sstream>
#include "Movie.h"
#include "MovieFactory.h"
#include "MovieInventory.h"
#include "Transaction.h"
#include "TransactionFactory.h"
using namespace std;

class MovieInventoryManager
{
public:
  MovieInventoryManager();
  ~MovieInventoryManager();

  void readCustomerFile(ifstream&);
  void readMovieFile(ifstream&);
  void readTransaction(ifstream&);

private:
  string readStringStream(stringstream&);

}
#endif
