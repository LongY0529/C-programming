//7-3
//judge prime number 
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	int flag;
	double a;
	printf("enter an integer:");	//enter an integer n 
	scanf("%d",&n);
	a = sqrt(n);	//calculatye the square root of n 
	for(i = 2 ; i < a ; i++)	//judge wether there is a divisor small than a 
	    if (n % i == 0)	//if i exist 
            break;	//than n is not a prime number
	if (i > a)	//if i dose not exist 
	    printf("%d is a prime number", n);	//a is a prime number 
	else	//otherwise a is not a prime number
	    printf("%d is not a prime number", n);
	return 0;	        
 } //end main()
