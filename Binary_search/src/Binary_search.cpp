//============================================================================
// Name        : Binary_search.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Binary_search.h"

int main() {
	int number, key ;
	cout<<"Enter the number of elements in the array : ";
	cin>>number;

	int array[number];

	accept_array(array , number);

	display_array(array , number);

	bubble_sort(array , number);

	display_array(array , number);

	cout<<"Enter the element to be searched : ";
	cin>>key;

	binary_search(array , number , key);

	return 0;
}
