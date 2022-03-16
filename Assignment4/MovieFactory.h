// -------------------------------------------------- MovieFactory.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for MovieFactory class
// --------------------------------------------------------------------------------------------------------------------
#ifndef MOVIEFACTORY
#define MOVIEFACTORY
#include "Movie.h"
#include "Comedy.h"
#include "Drama.h"
#include "Classic.h"
using namespace std;


class MovieFactory
{
public:

    // Constructor
    MovieFactory();
    // Destructor
    ~MovieFactory();         
    
    // Factory Method
    Movie* createMovie(string readRow);


};
#endif