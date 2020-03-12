/*
 * Linear_search_recursive_func.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: Sairaj Dherange
 */
#include<iostream>
using namespace std;
#include <iomanip>

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

int search_key(int array[], int number ,int key , int index){
	int pos;
	if(index >= number)
		return 0;
	else if(array[index] == key )
		{
			pos = index + 1;
			return pos;
		}
	else
		return search_key(array,number,key,index+1);
	return pos;


}


