// -------------------------------------------------- TransactionFactory.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Implementation of TransactionFactory class
// --------------------------------------------------------------------------------------------------------------------
#include "TransactionFactory.h"
#include <string>
#include <sstream>
#include <iostream>



//default constructor
TransactionFactory::TransactionFactory()
{
  
}
//destructor
TransactionFactory::~TransactionFactory()
{
  
}

//read the first string from string stream and then return the other group of words separated by ','
string TransactionFactory::readStringStream (stringstream& input)
{
    string words, temp;
    input >> words;
    
    // read string stream until last character is a comma
    while(words[words.length() - 1] != ',')
    {
        input >> temp;
        words = words + " " + temp;
    }
    
    // remove the last comma character
    if (words[words.length() - 1] == ',')
        words = words.substr(0, words.length() - 1);
    
    return words;
}

//creates new transaction object based on each row that's passed in
Transaction* TransactionFactory::createTransaction(string readRow)
{
    Transaction* transaction = NULL; // initialize NULL so if error found, returns NULLs
    int month = 0;
    int year = 0;
    string title;
    string director;
    string actor;
    // intialize string partitions
    char transType;
    string customerID;
    Movie* createdMovie = NULL;
    Transaction* newTrans = NULL;
    string temp;
    stringstream ss;
    char mediaType;
    char genre;

    ss << readRow;

    while(!ss.eof())
    {
        // stringstream row(readRow);
        ss >> transType;// read transaction type
        
        // keep going for history, borrow and return transactions
        if(transType == 'H' || transType == 'B' || transType == 'R' )
        {
            ss >> customerID;
            
            // keep going for borrow and return transactions
            if(transType != 'H')
            {
                ss >> mediaType;
                if (mediaType != 'D') // invalid media type - can only be D
                    cout << "ERROR: " << mediaType << " Invalid Media Type" << endl;
                else
                {
                    ss >> genre;
                    switch (genre)
                    {
                        case 'F':
                            title = readStringStream(ss);
                            ss >> year;
                            break;
                            
                        case 'D':
                            director = readStringStream(ss);
                            title = readStringStream(ss);
                            break;
                            
                        case 'C':
                            ss >> month >> year;
                            ss >> actor >> temp;
                            actor = actor + " " + temp;
                            break;
                            
                    }
                }
            }
          }
        //create new newTrans
            switch(transType)
    {
        case 'B':
            newTrans = new Borrow(customerID,);
            return newTrans;
            break;
        case 'R':
            newTrans = new Return();
            return newTrans;
            break;
        case 'I':
            newTrans = new Inventory();
            return newTrans;
            break;
        case 'H': 
            newTrans = new History();
            return newTrans;
            break;
        default:
            cout << "ERROR: " << endl;
            return newTrans;
            break;
  
    }
          
        //PLACEHOLDER FOR DOTRANSACTION METHOD
          // transaction.doTransaction(transaction);

          
        delete newTrans;
        
        title = "";
        director = "";
        actor = "";
        genre = 'Z';
        year = 0;
        month = 0;
        newTrans = NULL;
        createdMovie = NULL;
        
        getline(input,line); //get next line

      }
    }

