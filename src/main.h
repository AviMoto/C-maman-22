/*
 * main.h
 *
 *  Created on: 22 Dec 2013
 *      Author: Avi
 */

#ifndef MAIN_H_
#define MAIN_H_

struct {
	char *name;
	void (*func)(void);
}cmd[]={
		{"read_set",read_set},
		{"print_set",print_set},
		{"union_set",union_set},
		{"intersect_set",intersect_set},
		{"sub_set",sub_set},
		{"halt",halt},
		{"not_valid",NULL}
};

#endif /* MAIN_H_ */
