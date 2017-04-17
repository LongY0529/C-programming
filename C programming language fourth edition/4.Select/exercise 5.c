//4-5
//input an integer, if the integer < 1000, output the square root of the integer
//if the integer > 1000, re-enter an integer
#include <stdio.h>
#include <math.h>
int main()
{
	int i,k;                                      
	printf("enter the integer");	//input the integer
	scanf("%d",&i);
	while (i > 1000)	//if the integer > 1000
	{
		printf("re-enter the integer");	//re-enter
		scanf("%d",&i);
	}
	k=sqrt(i);	//calculate the square root of the integer
	printf("£ºthe result is:%d\n",k);	//output the result
	return 0;
}	//end main()
