//8-19-2
//define a function to free the memory of 8-19-1
#include <stdio.h>
#define NEWSIZE 2000    //define the max space of memory
char data[NEWSIZE]; //define struct data
char *p=data;   //pointer p points to the head of the data                      
void free(char *p)  //declare function free
    if (p >= data && p< data + NEWSIZE) //  if p points to the address which is after the space of data 
        p=p;    //pointer p points to the end of the data