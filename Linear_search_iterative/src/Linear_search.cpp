//============================================================================
// Name        : Linear_search.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Linear_search_iterative.h"

int main() {
	int number, key ;
	cout<<"Enter the number of elements in the array : ";
	cin>>number;

	int array[number];

	accept_array(array , number);

	display_array(array , number);

	cout<<"Enter the element to be searched : ";
	cin>>key;

	int index ;
	index = search_key(array , number , key);
	if(index == -1)
		cout<<"Number not found !!!"<<endl;
	else
		cout<<key<<" is at position "<<index+1<<endl;
	return 0;
}
