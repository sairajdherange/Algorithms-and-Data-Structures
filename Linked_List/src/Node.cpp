//============================================================================
// Name        : Node.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Node.h"
#include <iostream>

namespace std {

Node::Node() {
	this->data = 0 ;
	this->next = NULL;
}

void Node::set_data(int data){
	this->data = data ;
}
void Node::set_next(Node *next){
	this->next = next ;
}
int Node::get_data(){
	return this->data;
}
Node* Node::get_next(){
	return this->next;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
