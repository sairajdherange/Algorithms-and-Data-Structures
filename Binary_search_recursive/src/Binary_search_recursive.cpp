//============================================================================
// Name        : Binary_search_recursive.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Binary_search_recursive.h"

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

	if( binary_search(array , number , key , 0 , number-1))
		cout<<"Number found "<<endl;
	else
		cout<<"Number not found "<<endl;

	return 0;
}
