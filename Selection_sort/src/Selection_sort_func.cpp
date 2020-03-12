/*
 * Selection_sort_func.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: sunbeam
 */

#include "Selection_sort.h"
#include <iostream>
#include <iomanip>
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
void selection_sort(int array[] , int number){
	int i, j, temp;
	for (i = 0; i < number; ++i) {
		temp = i ;
		for (j = i+1; j < number; ++j) {
			if(array[j] < array[temp])
				temp = j;
		}
		swap(&array[i],&array[temp]);
	}
}
