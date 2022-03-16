// -------------------------------------------------- Return.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Implementation of Return class
// --------------------------------------------------------------------------------------------------------------------
#include "Return.h"

Return::Return(int customerID, Movie* movie)
{
    this->movie = movie;
    this->customerID = customerID;
}

bool Return::doTransaction(string movieString, MovieInventory&)
{
  cout << "Do Borrow" << end;
  
}
