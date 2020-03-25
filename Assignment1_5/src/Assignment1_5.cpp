//============================================================================
// Name        : Assignment1_5.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Assignment1_5.h"

int main() {
	char word[20];
	char key;

	cout <<"Enter the string : ";
	cin >> word;

	cout <<"Enter the character to be eliminated : ";
	cin >> key;

	cout<< "The string before elimination is \"" << word<<"\"." <<endl;

	int holes = remove_character(word , key);

	cout<< "The string after elimination is \"" << word<<"\" and number of holes are "<< holes <<endl;
	return 0;
}
