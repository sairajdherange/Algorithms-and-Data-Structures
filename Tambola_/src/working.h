/*
 * working.h
 *
 *  Created on: 14-Mar-2020
 *      Author: sunbeam
 */

#ifndef WORKING_H_
#define WORKING_H_

class working {
	int a;
	int array[100];
public:
	working();
	int next_element();
	void show_all();
	int last_element();
	virtual ~working();
};
static int m = 0;
int menulist();

#endif /* WORKING_H_ */
