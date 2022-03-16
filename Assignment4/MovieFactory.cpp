// -------------------------------------------------- MovieFactory.cpp ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for MovieFactory class
// --------------------------------------------------------------------------------------------------------------------
#include "MovieFactory.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

MovieFactory::MovieFactory()
{
  
}

// MovieFactory::~MovieFactory()
// {
  
// }

Movie* MovieFactory::createMovie(string readRow)
{
  Movie* movie = NULL; // initialize NULL so if error found, returns NULLs
  
  // intialize string partitions
  string genreString;
  string title;
  string director;
  string stockString;
  string yearReleasedOrActor;

  // parse into variables
  std::istringstream row(readRow);
  getline(row, genreString, ',');
  getline(row, stockString, ',');
  getline(row, director, ',');
  getline(row, title, ',');
  getline(row, yearReleasedOrActor, ',');
  // NOTE: NEED TO REMOVE LEADING AND TRAILING WHITESPACE OF GENRESTRING, STOCKSTRING, DIRECTOR, ETC

  //cast vars
  char genre = genreString[0]; // first char is the genre
  int stock = stoi(stockString);

  switch(genre) {
    case 'F': {
      int yearReleased = stoi(yearReleasedOrActor);
      movie = new Comedy(genre, stock, 'D', director, title, yearReleased);
      return movie;
      break;
    }
    case 'D': {
      int yearReleased = stoi(yearReleasedOrActor);
      movie = new Drama(genre, stock, 'D', director, title, yearReleased);
      return movie;
      break;
    }
    case 'C': {
      // parse yearReleasedOrActor into multiple variables
      // intialize string partitions
      string majorActorFName;
      string majorActorLName;
      string monthReleasedString;
      string yearReleasedString;
      string majorActor;
      // parse into variables
      std::istringstream tmp(yearReleasedOrActor);
      getline(tmp, majorActorFName, ' ');
      getline(tmp, majorActorLName, ' ');
      getline(tmp, monthReleasedString, ' ');
      getline(tmp, yearReleasedString, ' ');
      //cast vars
      // NEED TO COMBINE majorActorFName and majorActorLName
      majorActor = majorActorFName + ' ' + majorActorLName;
      int monthReleased = stoi(monthReleasedString);
      int yearReleased = stoi(yearReleasedString);
      movie = new Classic(genre, stock, 'D', director, title, majorActor, monthReleased, yearReleased);
      return movie;
      break;
    }
    default: {
      cout << "ERROR" << endl;
      return movie;
    }
  }
}

// void MovieFactory::readMovieInputs(ifstream& infile)
// {
//   //local variables
//   string genre_;
//   int stock_;
//   int monthReleased_;
//   int yearReleased_;
//   string director_;
//   string title_;
//   string majorActor_;
//   string row_;
//   getline(infile, row); //read row

//   while(!infile.eof())
//     {
//       stringstream readRow(row);
//       string tmp;

    

//     }

  
  
// }