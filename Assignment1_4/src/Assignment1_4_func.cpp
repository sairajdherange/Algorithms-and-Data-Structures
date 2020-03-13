//============================================================================
// Name        : Assignment1_4_func.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Assignment1_4.h"
#include <iostream>
#include <iomanip>
using namespace std;

int get_rank(int array[] ,int n ,int key){
	int rank = 0 ;
	for (int i = 0; i < n; ++i) {
		if(array[i] <= key)
			rank++;
	}
	return rank;
}

void display_array(int array[] , int number){
	cout<<"The elements of the array are ";
	for(int i = 0 ; i < number ; i++)
		cout<<setw(4)<<left<<array[i];
	cout<<endl;
}
