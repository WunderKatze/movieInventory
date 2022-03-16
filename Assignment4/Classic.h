// -------------------------------------------------- Classic.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for Classic class
// --------------------------------------------------------------------------------------------------------------------
#ifndef CLASSIC
#define CLASSIC
#include "Movie.h"
using namespace std;

class Classic : public Movie
{
public:
  Classic();
  Classic(char genre, int stock, char mediaType, string director, string title,
        string majorActor, int monthReleased, int yearReleased); 
 
  ~Classic(); 
  virtual int getMonthReleased();
  virtual string getMajorActor();

  virtual bool operator==(const Movie& otherMovie) const;   
  virtual bool operator != (const Movie& otherMovie) const; 
  virtual bool operator > (const Movie& otherMovie) const;   
  virtual bool operator < (const Movie& otherMovie) const;  

protected:
  string majorActor;
  int monthReleased;

};

#endif