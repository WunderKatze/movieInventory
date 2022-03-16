// -------------------------------------------------- Classic.cpp ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Implementation of the Classic class. 
// --------------------------------------------------------------------------------------------------------------------
#include "Classic.h"
using namespace std;

// ------------------------------------------ Constructor Classic() --------------------------------------------
// Description: Constructor
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
Classic::Classic()
{
  
}
// ------------------------------------------ Constructor Classic() --------------------------------------------
// Description: Constructor w/ populated Classic class
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
Classic::Classic(char genre, int stock, char mediaType, string director, string title,
        string majorActor, int monthReleased, int yearReleased)
{
  this->genre = genre;
  this->stock = stock;
  this->mediaType = mediaType;
  this->title = title;
  this->director = director;
  this->yearReleased = yearReleased;
  this->monthReleased = monthReleased;
  this->majorActor = majorActor;
}

// ------------------------------------------ Destructor Classic() --------------------------------------------
// Description: Destroys Classic class
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
Classic::~Classic()
{
  
}

//Getters
int Classic::getMonthReleased() 
{
  return monthReleased;
}

string Classic::getMajorActor() 
{
  return majorActor;
}


bool Classic::operator == (const Movie& other) const
{
     if (monthReleased == other.getMonthReleased() &&
        yearReleased == other.getYearReleased() && majorActor == other.getMajorActor())
        return true;
    else
        return false;
}

bool Classic::operator !=(const Movie& other) const
{
  return !(*this == other);
}

bool Classic::operator > (const Movie& other) const
{
   if (yearReleased > other.getYearReleased())
        return true;
    else if (yearReleased == other.getYearReleased())
    {
        if (monthReleased > other.getMonthReleased())
            return true;
        else if (monthReleased == other.getMonthReleased() && majorActor >       other.getMajorActor())
            return true;
    }
    return false;
}

bool Classic::operator < (const Movie& other) const
{
   if (yearReleased < other.getYearReleased())
        return true;
    else if (yearReleased == other.getYearReleased())
    {
        if (monthReleased < other.getMonthReleased())
            return true;
        else if (monthReleased == other.getMonthReleased() && majorActor < other.getMajorActor())
            return true;
    }
    return false;
}
