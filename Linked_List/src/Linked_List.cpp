//============================================================================
// Name        : Assignments2_1.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int menu_list()
{
	int choice;
	cout << "0. Exit\n1. Add Node\n2. Delete Node\n3. Display Node\nSelect your choice :";
	cin >> choice ;
	return choice;
}

int main() {
	Linked_List *list = new Linked_List;
	int choice;
	while((choice = menu_list()) != 0)
	{
		switch(choice)
		{
		case 1 : list->add_node();
		break;
		case 2 : list->delete_node();
		break;
		case 3 : list->display_all();
		break;
		default : cout << "Wrong Choice!!!" << endl ;
		}
	}
	delete(list);

	return 0;
}
