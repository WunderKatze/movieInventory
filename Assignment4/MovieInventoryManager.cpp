// -------------------------------------------------- MovieInventoryManager.h -----------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3/14/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Implementation of movie inventory manager class
// --------------------------------------------------------------------------------------------------------------------
// Manager for movie inventory
// --------------------------------------------------------------------------------------------------------------------
#include "MovieInventoryManager.h"

// --------------------------------------------------------------------------------------
// default constructor
// --------------------------------------------------------------------------------------
MovieInventoryManager::MovieInventoryManager()
{
    
}

// --------------------------------------------------------------------------------------
// destructor
// --------------------------------------------------------------------------------------
MovieInventoryManager::~MovieInventoryManager()
{
    
}

void MovieInventoryManager::readCustomerFile(ifstream& infile)
{
  
}

void MovieInventoryManager::readMovieFile (ifstream& infile)
{
    MovieFactory* movieFactory;
    // read file by line
    string line;
    getline(infile, line);
    
    while(!infile.eof())
    {
        stringstream readLine(line);
        
        // Create movie and add to the movieTree
        Movie* newMovie = movieFactory->createMovie(readLine.str());
    
        getline(infile,line);                        // read next line
    }
}

void MovieInventoryManager::readTransaction(ifstream& infile)
{
  Transaction* newTransaction = NULL;
  TransactionFactory* transfactory;
  string line;
  getline(infile, line);

   while(!infile.eof())
    {
      stringstream readLine(line);
      //create new transaction
      newTransaction = transfactory->createTransaction(readLine.str());
      
      getline(infile, line); //read next line
      delete newTransaction;
    }
  
}