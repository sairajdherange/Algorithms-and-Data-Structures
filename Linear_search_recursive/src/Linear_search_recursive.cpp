//============================================================================
// Name        : Linear_search_recursive.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Linear_search_recursive.h"

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
	index = search_key(array , number , key, 0);
	if(index != 0)
		cout<<key<<" is at position "<<index<<endl;
	else
		cout<<"Number not found !!!"<<endl;
	return 0;
}
