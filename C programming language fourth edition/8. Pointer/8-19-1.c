//8-19-1
//define a function to assign memory for continuous char
//return a pointer points to the head of the memory
#include <stdio.h>
#define NEWSIZE 20000 //define the max space of memory
char data[NEWSIZE]; //define struct data
char *p=data; //define the pointer points to the head of the data           
char *new(int n)  //declare function new
    p += n; //pointer p points to the end of the data
	  return(p-n);  //return a pointer points to the head of the memory