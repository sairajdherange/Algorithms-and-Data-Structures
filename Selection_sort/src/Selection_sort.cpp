//============================================================================
// Name        : Selection_sort.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Selection_sort.h"

int main() {
	int number ;
	cout<<"Enter the number of elements in the array : ";
	cin>>number;

	int array[number];

	accept_array(array , number);

	cout<<"Before sorting ";
	display_array(array , number);

	selection_sort(array , number);

	cout<<"After sorting ";
	display_array(array , number);


	return 0;
}
