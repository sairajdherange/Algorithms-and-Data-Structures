//============================================================================
// Name        : Tambola_.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "working.h"

int main() {
	cout<< "Welcome to TAMBOLA !!!"<<endl<<"Lets start the game"<<endl;
	int choice ;
	working game;
	while((choice = menulist()) != 0)
	{
		switch(choice)
		{
		case 1 :
			cout << "The number is " << game.next_element()<<endl;
			break;

		case 2 :
			game.show_all();
			break;

		case 3 :
			cout << "The last number is " << game.last_element()<<endl;
			break;
		}
	}
	cout << "Thank you for playing Tambola";

	return 0;
}
