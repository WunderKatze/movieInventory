// -------------------------------------------------- Movie.cpp ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - Implementation of the movie class. 
// --------------------------------------------------------------------------------------------------------------------
#include "Movie.h"
#include <iostream>
#include <fstream>

Movie::Movie()
{
  
}

Movie::Movie(string genre, int stock, char mediaType, string title, string director,
          int yearReleased)
{
  this->genre = genre;
  this->stock = stock;
  this->mediaType = mediaType;
  this->title = title;
  this->director = director;
  this->yearReleased = yearReleased;
  
}

Movie::~Movie()
{
  
}

//Getters
int Movie::getStock() const
{
  return stock;
}
string Movie::getGenre() const
{
  return genre;
}
string Movie::getDirector() const
{
  return director;
}
string Movie::getTitle() const
{
  return title;
}
int Movie::getYearReleased() const
{
  return yearReleased;
}
char Movie::getMediaType() const
{
  return mediaType;
}
int Movie::getMonthReleased()const
{
  return monthReleased;
}
string Movie::getMajorActor()const
{
  return majorActor;
}
  	

//Setters
void Movie::setStock(int stock)
{
  this->stock = stock;
}

void Movie::setDirector(string director)
{
  this->director = director;
}
void Movie::setTitle(string title)
{
  this->title = title;  
}
void Movie::setYearReleased(int yearReleased)
{
  this->yearReleased = yearReleased;
}

// ------------------------------------------ operator==() --------------------------------------------
// Description: Equal to boolean operator 
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
bool Movie::operator == (const Movie& other) const
{
  if(this->title == other.title && this->yearReleased == other.yearReleased)
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
// Precondition: Uses == operator
// ---------------------------------------------------------------------------------------------------
bool Movie::operator != (const Movie& other) const
{
  return !(*this == other);
}

// ------------------------------------------ operator>() --------------------------------------------
// Description: Greater than boolean operator 
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
bool Movie::operator > (const Movie& other) const
{
  return this->yearReleased > other.yearReleased;
}
// ------------------------------------------ operator>() --------------------------------------------
// Description: Less than boolean operator 
// Precondition: N/A
// ---------------------------------------------------------------------------------------------------
bool Movie::operator < (const Movie& other) const
{
  return this->yearReleased < other.yearReleased;
}
