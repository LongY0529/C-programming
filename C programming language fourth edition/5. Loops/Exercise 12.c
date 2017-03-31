//5-12
#include <stdio.h> 
int main()
{
	int day,x1,x2;
	day=9;
	x2=1;
	while(day>0)
	{
		x1=(x2+1)*2;    /*The number of peaches of the first day is two times the second day's plus one */
		x2=x1;
		day--;
	}
	printf("total=%d\n",x1);
	return 0;
}
