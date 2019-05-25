//============================================================================
// Name        : Variables.cpp
// Author      : D_Green
// Version     :
// Copyright   : D_Green
// Description : Animals in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int numberCats = 5;
	int numOfDogs = 7;

	cout << "The number of cats = " << numberCats << endl;

	cout << "The number of dogs = " << numOfDogs << endl;

	cout << "The total number of animals = " << numberCats + numOfDogs << endl;

	cout << "I bought a new dog" << endl;

	numOfDogs ++;

	cout << "I now have " << numOfDogs << " dogs" << endl;

	return 0;
}
