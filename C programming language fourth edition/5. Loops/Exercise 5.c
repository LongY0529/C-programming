//5-5
#include <stdio.h>
int main()
{
	int  a,n,i=1,sn=0,tn=0;
	printf("a,n=:");
	scanf("%d,%d",&a,&n);
	while (i<=n)
	{
		tn=tn+a;  /*The value of tn after assigned is a for i times*/
		sn=sn+tn; /*The value of sn after assigned is the sum of the first i terms of the polynomial */
		a=a*10;
		++i;
	}
	printf("a+aa+aaa+...=%d\n",sn);
	return 0;
}
