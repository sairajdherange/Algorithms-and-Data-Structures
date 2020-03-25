//============================================================================
// Name        : Assignment1_5_func.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Assignment1_5.h"

int remove_character(char word[] ,int key){
	int i = 0 , count = 0;
	while(word[i] != '\0')
	{
		if(word[i] == key){
			word[i] = '_';
			count++;
			i++;
		}
	}
	return count;
}


