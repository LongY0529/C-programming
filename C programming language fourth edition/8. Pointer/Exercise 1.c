//Exercise 8-1
//Input three integers, print out them in acsending order

#include <stdio.h>
int main()
{ 
	void swap(int *p1, int *p2);	//declare the function swap
 	int n1, n2, n3;
 	int *p1, *p2, *p3;	//define three pointers point to three integers 
 	printf("input three integer n1, n2, n3:");	//input three integers(eg: 1,2,3) 
 	scanf("%d,%d,%d", &n1,&n2,&n3);
 	p1 = &n1;	//pointer p1 points to n1
 	p2 = &n2;	//pointer p2 points to n2
 	p3 = &n3;	//pointer p3 points to n3
 	if(n1 > n2)	//if n1 > n2 
	 	swap(p1,p2);	//swap p1 and p2, so that it makes sure p1 < p2
 	if(n1 > n3)	//if n1 > n3 
	 	swap(p1,p3);	//swap p1 and p3, so that it makes sure p1 < p3
 	if(n2 > n3)	//if n2 > n3
	 	swap(p2,p3);	//swap p2 and p3, so that it makes sure p2 < p3 
	//after the above three swap, the order will be: p1 < p2 < p3
 	printf("sorted order is: %d,%d,%d\n", n1,n2,n3);	//output the new order 
 	return 0;
}	//end main()

void swap(int *p1, int *p2)	//this function serves as exchanging the place of two integers
{
	int p;	//define a medium 
   	p = *p1;	//the following three steps swap p1 and p2 
	*p1 = *p2; 	
	*p2 = p;
}	//end swap()

