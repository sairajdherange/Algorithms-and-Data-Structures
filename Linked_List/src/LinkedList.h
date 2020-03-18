//============================================================================
// Name        : LinkedList.h
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Node.h"

namespace std {

class Linked_List {
	Node *head;
	Node *tail;
public:
	Linked_List();
	void set_head(Node *head);
	void set_tail(Node *tail);
	Node* get_head();
	Node* get_tail();
	void add_node();
	void delete_node();
	void display_all();
	virtual ~Linked_List();
};

} /* namespace std */

#endif /* LINKEDLIST_H_ */
