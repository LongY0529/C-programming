//5-11
#include <stdio.h> 
int main()
{
	double sn=100,hn=sn/2;
	int n;
	for (n=2;n<=10;n++)
	{
		sn=sn+2*hn;   /*The meter of the nth dropping*/
		hn=hn/2;      /*The height of the nth bounce*/
	}
	printf("The 10th dropping passing %f meter\n",sn);
	printf("The 10th bounce %f meter\n",hn);
	return 0;
}
