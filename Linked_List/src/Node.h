//============================================================================
// Name        : Node.h
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef NODE_H_
#define NODE_H_

namespace std {

class Node {
private:
	int data;
	Node *next;
public:
	Node();
	void set_data(int data);
	void set_next(Node *next);
	int get_data();
	Node* get_next();
	virtual ~Node();
};

} /* namespace std */

#endif /* NODE_H_ */
