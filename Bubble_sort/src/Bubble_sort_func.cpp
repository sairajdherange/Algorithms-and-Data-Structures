/*
 * Bubble_sort_func.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: Sairaj Dherange
 */
#include <iostream>
#include <iomanip>
#include "Bubble_sort.h"
using namespace std;

void accept_array(int array[] , int number){
	cout<<"Enter the elemrnt of the array : ";
	for(int i = 0 ; i < number ; i++)
		cin>>array[i];
}

void display_array(int array[] , int number){
	cout<<"The elements of the array are ";
	for(int i = 0 ; i < number ; i++)
		cout<<setw(4)<<left<<array[i];
	cout<<endl;
}
void swap(int *num1,int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void bubble_sort(int array[] , int number){
	int i , j ;
	for ( i = 0; i < number - 1 ; ++i) {
		for (j = 0; j < number - i- 1 ; ++j)
			if(array[j]>array[j+1])
				swap(&array[j],&array[j+1]);

	}
}
