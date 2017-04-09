//8-3
//input 10 integers, change the first integer with the smallest integer
//change the largest integer with the last integer
#include <stdio.h>
int main()
 { 
	void input(int *);	//declare funtion input 
   	void swap(int *);	//declare funcion swap  
   	void output(int *);	//declare function output 
   	int integer[10];	
   	input(integer); 	//run function input                         
   	swap(integer);	//run funcion swap                
   	output(integer);	//run function output
   	return 0;
 }	//end main

 void input(int *integer)              
 {
	int i;
  	printf("input 10 integers:");	//input 10 integers
  	for (i = 0; i < 10; i++)
    	scanf("%d",&integer[i]);	//scan 10 integers in the list
  }

 void swap(int *integer)           
 { 
	 int *max,*min,*p,p;
   	 max = min = integer;	//define the initial value of max and min
   	 for (p = integer ; p <= integer + 9; p++)	//define pointer p as the head of the string, scan all 10 integer
     	if (*p > *max)	//find the largest integer
		 	max = p;	//find it
			p = integer[9];	//pointer p points to the last number
			integer[9] = *max;	//swap the last number and the max 
			*max = p;             
     	else if (*p < *min)	//find the smallest integer
		 	min = p;	//find it          
   			p = integer[0];	//pointer p points to the first number
			integer[0]=*min;	//swap the first number and the min
			*min = p;
 }	//end swap()

void output(int *integer)                
{
	int *p;	
   	printf("new order is:    ");	//output the new order of 10 integers
   	for (p = integer; p < integer + 10; p++)
      	printf("%d ",*p);
}	//end output()