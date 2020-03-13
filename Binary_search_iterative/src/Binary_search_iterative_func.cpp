//============================================================================
// Name        : Binary_search_iterative_func.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <iomanip>
using namespace std;

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

void binary_search(int array[] , int number , int key){
	int low, high, mid , flag = 0;
	low = 0;
	high = number - 1 ;
	while(low <= high && flag == 0)
	{
		mid = (low + high)/2;
		if(key < array[mid])
		{
			high = mid -1;
		}
		else if(key > array[mid])
		{
			low = mid + 1 ;
		}
		else if(key == array[mid])
		{
			cout<<"Number found "<<endl;
			flag = 1;
		}
	}
	if(flag == 0)
		cout<<"Number not found."<<endl;
}
