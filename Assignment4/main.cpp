#include <iostream>
#include <string>
#include "Movie.h"
#include "Classic.h"
#include "Comedy.h"
#include "Drama.h"
using namespace std;

int main(){
	Classic c1 = Classic();
	Classic c2 = Classic('C', 10, 'D',"George Cukor", "Holiday", "Katherine Hepburn", 9, 1938);
	Classic c3 = Classic('C', 10, 'D',"George Cukor", "Holiday", "Cary Grant", 9, 1938);
	cout << "is c2 equal to c3?"<< (c2 == c3 ? "true" : "false") << endl;
	cout << "is c2 not equal to c2?" << (c2 != c3 ? "true" : "false") << endl;
	cout << "is c2 greater than c3?" << (c2 > c3 ? "true" : "false") << endl;
	cout << "is c3 less than c2?" << (c3 < c2 ? "true" : "false") << endl;
	Comedy f1 = Comedy();
	Comedy f2 = Comedy('F', 10, 'D',"Nora Ephron", "You've Got Mail", 1998);
	Comedy f3 = Comedy('F', 10, 'D', "Jon Chu", "Crazy Rich Asians", 2018);
	cout <<"is f2 equal to f3" << (f2 == f3 ? "true" : "false") << endl;
	cout << "is f2 not equal to f3?" <<(f2 != f3 ? "true" : "false") << endl;
	cout << "is f2 greater than f3?" << (f2 > f3 ? "true" : "false") << endl;
	cout << "is f3 less than f2?" << (f3 < f2 ? "true" : "false") << endl;
	Drama d1 = Drama();
	Drama d2 = Drama('D', 10, 'D', "Steven Spielberg", "Schindler's List", 1993);
  Drama d3 = Drama('D', 10, 'D', "Steven Spielberg", "Schindler's List", 1993);
	// Drama d3 = Drama('D', 10, 'D', "Phillippe De Broca", "King of Hearts", 1967);
	cout << "is d2 equal to d3? : " << (d2 == d3 ? "true" : "false") << endl;
	cout << "is d2 not equal to d3? : " << (d2 != d3 ? "true" : "false") << endl;
	cout << "is d2 greater than d3?" << (d2 > d3? "true" : "false") << endl;
	cout << "is d3 less than d2?" << (d3 < d2? "true" : "false") << endl;
	return 0;
};