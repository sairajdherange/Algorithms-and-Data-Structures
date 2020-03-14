//============================================================================
// Name        : working.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <iomanip>
#include "working.h"
#include <stdlib.h>


working::working() {

	// TODO Auto-generated constructor stub

}

int working::next_element(){
	label1 : a = rand() % 99 + 1;
	if(m != 0)
	{
		for (int i = 0; i < m; ++i) {
			if(this->array[i] == a)
				goto label1;
		}
	}
	array[m] = a;
	m++;
	return a;
}

void working::show_all(){
	cout << "The numbers are " ;
	for(int i = 0 ; i < m ; i++)
	{
		cout <<setw(4)<<left<< this->array[i];
	}
	cout<<endl;
}

int working::last_element(){
	return this->array[m-1];
}

int menulist(){
	int choice;
	cout << "0. Exit"<<endl;
	if(m == 0)
		cout << "1. Get first number" << endl;
	else
		cout << "1. Get next number" << endl;
	cout << "2. Show all numbers" << endl << "3. Show last number"<<endl<<"Enter your choice : ";
	cin>>choice;
	return choice;
}

working::~working() {
	// TODO Auto-generated destructor stub
}

