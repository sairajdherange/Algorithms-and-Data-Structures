//============================================================================
// Name        : Bubble_sort.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bubble_sort.h"
using namespace std;

int main() {
	int number ;
	cout<<"Enter the number of elements in the array : ";
	cin>>number;

	int array[number];

	accept_array(array , number);

	cout<<"Before sorting ";
	display_array(array , number);

	bubble_sort(array , number);

	cout<<"After sorting ";
	display_array(array , number);

	return 0;
}
