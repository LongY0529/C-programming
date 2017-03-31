//5-3
#include <stdio.h>
int main()
{
	int  p,r,n,m,temp;
	printf("Please input two integers n,m:");
	scanf("%d,%d,",&n,&m);
	if (n<m)
	{
		temp=n;
		n=m;
		m=temp;
	}
	p=n*m;
	while(m!=0)
	{
		r=n%m;
		n=m;
		m=r;
	}
	printf("Their greatest common divisor is:%d\n",n);
	printf("Their least common divisor is:%d\n",p/n);
	return 0;
}
