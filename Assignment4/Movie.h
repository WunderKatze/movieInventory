// -------------------------------------------------- Movie.h ----------------------------------------------------------
// Peter Chang, Ryan Sedlacek CSS502
// 3/13/2022
// 3//13/2022
// --------------------------------------------------------------------------------------------------------------------
// Purpose - header for Movie class
// --------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#ifndef MOVIE
#define MOVIE

using namespace std;

class Movie
{
  
  public:

    Movie();                                        
    Movie(string genre, int stock, char mediaType, string title, string director,
          int yearReleased);    
    ~Movie();    

   // Overloaded operators
    virtual bool operator==(const Movie& other) const;   
    virtual bool operator != (const Movie& other) const; 
    virtual bool operator > (const Movie& other) const;   
    virtual bool operator < (const Movie& other) const;   

    //getters & setters
  	int getStock()const;
  	void setStock(int);
  	string getGenre()const;
    void setGenre(string);
  	string getDirector()const;
  	void setDirector(string);
  	string getTitle()const;
  	void setTitle(string);
  	int getYearReleased()const;
  	void setYearReleased(int);
    char getMediaType()const;
    int getMonthReleased()const;
    string getMajorActor()const;

  protected:
    string genre;
    int stock; 
    string director; 
    string title; 
    int yearReleased;
    char mediaType;
    int monthReleased;
    string majorActor;


};

#endif