//4-4
//find the largest integer in 3 integers
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("input three integers:");	//input three integer
	scanf("%d,%d,%d",&a,&b,&c);
	if (a<b)	//if a < b
		if (b<c)	//and if b < c
			printf("max=%d\n",c);	//output the largest integer c
		else	//and if b > c
			printf("max=%d\n",b);	//output the largest integer b
	else if (a<c)	//if a > b and a < c
		printf("max=%d\n",c);	//output the largest integer c
    else	//if a > b and a > c
		printf("max=%d\n",a);	//output the largest integer a 
  return 0;
}	//end main()
