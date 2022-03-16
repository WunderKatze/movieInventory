// -------------------------------------------------- Comedy.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for Comedy class
// --------------------------------------------------------------------------------------------------------------------
#ifndef COMEDY
#define COMEDY
#include "Movie.h"
using namespace std;

class Comedy : public Movie
{
public:
  Comedy();
  Comedy(char genre, int stock, char mediaType, string director, string title, int yearReleased);

  virtual bool operator==(const Movie& otherMovie) const;   
  virtual bool operator != (const Movie& otherMovie) const; 
  virtual bool operator > (const Movie& otherMovie) const;   
  virtual bool operator < (const Movie& otherMovie) const;   

};

#endif