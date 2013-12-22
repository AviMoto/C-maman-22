/*
 ============================================================================
 Name        : main.c
 Author      : Avi Levy
 Version     : 1.0.0
 Copyright   : All Right for Avi Levy
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "set.h"

set A,B,C,D,E,F;

int main(void) {
	char command[30];	/* save the current command get from user */
	int i;	/* General Index */
	while(1 == 1){
		if(scanf("%s",command) == 1){
			for(i=0;cmd[i].func != NULL;i++){
				if(strcmp(command,cmd[i].name) == 0){
					break;
				}
				if(cmd[i].func == NULL){
					fprintf(stderr,"Command does not exist: %s\n", command);
				} else {
					(*(cmd[i].func))();
				}
			}
		}
	}
	return EXIT_SUCCESS;
}
