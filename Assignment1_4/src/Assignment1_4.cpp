//============================================================================
// Name        : Assignment1_4.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Assignment1_4.h"

int main() {
	int key;
	int array[] = { 10, 20, 15, 3, 4, 4, 1 };
	int n = sizeof(array)/sizeof(array[0]);

	display_array(array , n);

	cout<<"Enter the element whose rank is to be searched : ";
	cin >> key;

	cout << "The rank of "<< key << " is "<< get_rank(array , n , key);

	return 0;
}
