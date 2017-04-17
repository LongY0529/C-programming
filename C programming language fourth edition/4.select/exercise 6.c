//4-6
//declare a function
//when x < 1, y = x, when 1 <= x < 10, y = 2*x - 1 , when x >= 10, y = 3*x - 11
#include <stdio.h>
int main()
{ 
	int x,y;
	printf("input x:");	//input x
	scanf("%d",&x);
	if(x < 1)	//if x < 1
	{
		y = x;
		printf("y = x = %d\n" ,y);	//output y =x 
	}
	else  if(x < 10)	//if 1 <= x < 10
	{
		y = 2*x-1;
		printf("y = 2*x-1 = %d\n",y);	//output y = 2*x - 1
	}
	else	//if x >= 10
	{ 
		y = 3*x-11;
		printf("y = 3*x-11 = %d\n",y);	//output y = 3*x - 11
	}
return 0;
}	//end main()
