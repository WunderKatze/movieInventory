// -------------------------------------------------- Comedy.cpp ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Implementation of the Comedy class. 
// --------------------------------------------------------------------------------------------------------------------
#include "Comedy.h"
using namespace std;

// ------------------------------------------ Constructor Comedy() --------------------------------------------
// Description: Constructor
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
Comedy::Comedy()
{
  
}
// ------------------------------------------ Constructor Comedy() --------------------------------------------
// Description: Constructor w/ populated Comedy class for genre, title, director and yearReleased
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
Comedy::Comedy(char genre, int stock, char mediaType, string director, string title, int yearReleased)
{
  this->genre = genre;
  this->stock = stock;
  this->mediaType = mediaType;
  this->title = title;
  this->director = director;
  this->yearReleased = yearReleased;
}
// ------------------------------------------ Destructor Comedy() --------------------------------------------
// Description: Destroys Comedy class
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
// Comedy::~Comedy()
// {
  
// }

// ------------------------------------------ operator==() --------------------------------------------
// Description: Equal to boolean operator 
// Virtual method
// ---------------------------------------------------------------------------------------------------
bool Comedy::operator == (const Movie& other) const
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
bool Comedy::operator !=(const Movie& other) const
{
  return !(*this == other);
}
// ------------------------------------------ operator>() --------------------------------------------
// Description: Greater than boolean operator 
// Virtual method
// ---------------------------------------------------------------------------------------------------
bool Comedy::operator > (const Movie& other) const
{
    if (title > other.getTitle())
        return true;
    else if (title == other.getTitle() && yearReleased > other.getYearReleased())
        return true;
    else
        return false;
}
// ------------------------------------------ operator<() --------------------------------------------
// Description: Less than boolean operator 
// Virtual method 
// ---------------------------------------------------------------------------------------------------
bool Comedy::operator < (const Movie& other) const
{
 if (title < other.getTitle())
        return true;
    else if (title == other.getTitle() && yearReleased < other.getYearReleased())
        return true;
    else
        return false;
}
