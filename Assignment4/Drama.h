// -------------------------------------------------- Drama.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for drama class
// --------------------------------------------------------------------------------------------------------------------
#ifndef DRAMA
#define DRAMA
#include "Movie.h"
using namespace std;

class Drama : public Movie
{
public:
    Drama();
    Drama(char genre, int stock, char mediaType, string director, string title,
          int yearReleased);      
    ~Drama();              
    
    // Overloaded operators
    virtual bool operator==(const Movie& otherMovie) const;   
    virtual bool operator != (const Movie& otherMovie) const; 
    virtual bool operator > (const Movie& otherMovie) const;   
    virtual bool operator < (const Movie& otherMovie) const;    

};

#endif