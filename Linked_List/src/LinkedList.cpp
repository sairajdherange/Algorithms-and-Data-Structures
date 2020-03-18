//============================================================================
// Name        : LinkedList.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "LinkedList.h"
#include <iostream>

namespace std {

Linked_List::Linked_List() {
	this->head = NULL;
	this->tail = NULL;
}

void Linked_List::set_head(Node *head){
	this->head = head;
}
void Linked_List::set_tail(Node *tail){
	this->tail = tail;
}
Node* Linked_List::get_head(){
	return this->head;
}
Node* Linked_List::get_tail(){
	return this->tail;
}

void Linked_List::add_node(){
	int data;
	Node *temp = new Node;
	cout << "Enter the data : ";
	cin >> data;
	temp->set_data(data);
	temp->set_next(NULL);
	if(this->head == NULL)
	{
		this->head = temp;
		this->tail = temp;
	}
	else
	{
		this->tail->set_next(temp);
		this->tail = temp;
	}
}
void Linked_List::delete_node(){
	if(this->head == NULL)
	{
		cout << "List is empty!!!!" << endl ;
	}
	else if(this->head == this->tail)
	{
		delete(this->head);
		this->head = this->tail = NULL;
	}
	else
	{
		Node *a;
		a = this->head;
		while(a->get_next() != this->tail)
		{
			a = a->get_next();
		}
		delete(a->get_next());
		this->tail = a;
	}
}
void Linked_List::display_all(){
	if(this->head == NULL)
	{
		cout << "List is empty!!!!" << endl ;
	}
	else if(this->head == this->tail)
	{
		cout << this->head->get_data() << endl;
	}
	else
	{
		Node *a;
		a = this->head;
		while(a != this->tail)
		{
			cout << a->get_data() << "\t";
			a = a->get_next();
		}
		cout << a->get_data() << endl;
	}
}

Linked_List::~Linked_List() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
