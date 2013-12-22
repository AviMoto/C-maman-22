/*
 * set.h
 *
 *  Created on: 22 Dec 2013
 *      Author: Avi
 */

#ifndef SET_H_
#define SET_H_

typedef char set[16];
void read_set(char,char *);
void print_set(char);
void union_set(char,char,char);
void intersect_set(char,char,char);
void sub_set(char,char,char);
void halt(void);

#endif /* SET_H_ */
