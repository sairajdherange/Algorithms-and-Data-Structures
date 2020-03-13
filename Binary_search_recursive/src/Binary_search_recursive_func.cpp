//============================================================================
// Name        : Binary_search_recursive_func.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
#include  "Binary_search_recursive.h"

void swap(int *num1,int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

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

void bubble_sort(int array[] , int number){
	int i , j ;
	for ( i = 0; i < number - 1 ; ++i) {
		for (j = 0; j < number - i- 1 ; ++j)
			if(array[j]>array[j+1])
				swap(&array[j],&array[j+1]);

	}
}

bool binary_search(int array[] , int number , int key , int low , int high){
	int mid;
	mid = (low + high)/2;
	if(low > high)
		return false;
	if(key == array[mid])
		return true;
	else if(key < array[mid])
		return binary_search(array, number , key ,low , mid-1);
	else
		return binary_search(array, number , key ,mid +1 , high);
}

