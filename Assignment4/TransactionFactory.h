// -------------------------------------------------- TransactionFactory.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for TransactionFactory class
// --------------------------------------------------------------------------------------------------------------------
#ifndef TRANSFAC
#define TRANSFAC
#include "MovieFactory.h"
#include "Transaction.h"
#include "Borrow.h"
#include "Return.h"
#include "Inventory.h"
#include "History.h"
using namespace std;
#include <iostream>
#include <fstream>
#include <sstream>


class TransactionFactory
{
public:
    TransactionFactory();               
    ~TransactionFactory();             
    Transaction* createTransaction(string);  

private:
  string readStringStream(stringstream&);
};
#endif
