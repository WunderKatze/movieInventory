// -------------------------------------------------- Drama.cpp ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Implementation of the Drama class. 
// --------------------------------------------------------------------------------------------------------------------
#include "Drama.h"
using namespace std;

// ------------------------------------------ Constructor drama() --------------------------------------------
// Description: Constructor
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
Drama::Drama()
{
  
}
// ------------------------------------------ Constructor drama() --------------------------------------------
// Description: Constructor w/ populated drama class for genre, title, director and yearReleased
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
Drama::Drama(char genre, int stock, char mediaType, string director, string title,
          int yearReleased)
{
  this->genre = genre;
  this->stock = stock;
  this->mediaType = mediaType;
  this->title = title;
  this->director = director;
  this->yearReleased = yearReleased;
}
// ------------------------------------------ Destructor drama() --------------------------------------------
// Description: Destroys drama class
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
Drama::~Drama()
{
  
}

// ------------------------------------------ operator==() --------------------------------------------
// Description: Equal to boolean operator 
// Virtual method
// ---------------------------------------------------------------------------------------------------
bool Drama::operator == (const Movie& other) const
{
  if(director == other.getDirector() && title == other.getTitle())
  {
    return true;
  }
  else
  {
    return false;
  }
}
// ------------------------------------------ operator!=() --------------------------------------------
// Description: Not equal to boolean operator 
// Virtual method
// ---------------------------------------------------------------------------------------------------
bool Drama::operator !=(const Movie& other) const
{
  return !(*this == other);
}
// ------------------------------------------ operator>() --------------------------------------------
// Description: Greater than boolean operator 
// Virtual method
// ---------------------------------------------------------------------------------------------------
bool Drama::operator > (const Movie& other) const
{
    if (director > other.getDirector())
        return true;
    else if (director == other.getDirector() && title > other.getTitle())
        return true;
    else
        return false;
}
// ------------------------------------------ operator<() --------------------------------------------
// Description: Less than boolean operator 
// Virtual method
// ---------------------------------------------------------------------------------------------------
bool Drama::operator < (const Movie& other) const
{
    if (director < other.getDirector())
        return true;
    else if (director == other.getDirector() && title < other.getTitle())
        return true;
    else
        return false;
}
