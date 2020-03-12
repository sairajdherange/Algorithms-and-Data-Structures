//============================================================================
// Name        : Binary_search_iterative.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Assignment1_1.h"
using namespace std;

int main() {
	int array[] = { 1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8 };

	int number = sizeof(array)/sizeof(array[0]);

	display_array(array , number);

	cout << "The first non repeating element is "<<search_non_repeating(array , number);

	return 0;
}
