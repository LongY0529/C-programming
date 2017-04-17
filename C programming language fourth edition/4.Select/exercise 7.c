//4-6
//declare a function 
//when x < 0, y = -1, when x = 0, y = 0, when x > 0, y = 1.
#include <stdio.h>
int main()
{ 
	int x,y;
	printf("input x:");	//input x
	scanf("%d",&x);
	if(x < 0)	//if x < 0
	{
		y = -1;
		printf("y=%d\n" ,y);	//output y = -1
    	}
	else  if(x == 0)	//if x = 0
	{ 
		y = 0;
		printf("y=%d\n" ,y);	//output y = 0
	}
	else	//if x > 0
	{
		y = 1 ;
		printf("y=%d\n" ,y);	//output y = 1
	}
return 0;
}	//end main()
