/*
 * Assignment1_2_func.cpp
 *
 *  Created on: 12-Mar-2020
 *      Author: sunbeam
 */

#include "Assignment1_2.h"
#include <iostream>
#include <iomanip>
using namespace std;

void display_array(int array[] , int number){
	cout<<"The elements of the array are ";
	for(int i = 0 ; i < number ; i++)
		cout<<setw(4)<<left<<array[i];
	cout<<endl;
}



void search_non_repeating(int array[] , int number){
	int i,j,count, temp[number] , temp1[3];
	for(i = 0 ; i < number ; i++){
		count = 0;
		for(j = 0 ; j < number ; j ++)
			if(array[i] == array[j])
				count = count + 1;
		temp[i] = count;
	}
//	display_array(temp , number);
	j = 0;
	for(i = 0 ; i < number ; i++)
		if(temp[i] == 1){
			temp1[j]=array[i];
			j++;
		}
	display_array(temp1 , 3);
}
