//5-9-1
#define M 1000             /*Define the range of the search*/
#include <stdio.h>
int main()
{
	int k1,k2,k3,k4,k5,k6,k7,k8,k9,k10;
	int i,a,n,s;
	for (a=2;a<=M;a++)      /* a is the integer from 2 to 1000, check whether it is perfect number*/
	{
		n=0;                  /* n is to accumulate the number of factors of a*/
		s=a;                  /* s is to store the sum of the factors that have not been evaluated, at first it is a*/
		for (i=1;i<a;i++)    /* check whether i is the factor of a*/
			if (a%i==0)        /* if i is the factor of a*/
			{
				n++;                 /* n plus 1 then it means another one factor is found*/
				s=s-i;               /* s minus the already found factor, the value of s is the sum of factors that have not been found*/
				switch(n)            /* assign factors to k1 to k10*/
				{
				case 1:
					k1=i;  break;   /* assign the first factor to k1*/
				case 2:
					k2=i;  break;   /* assign the second factor to k2 */
				case 3:
					k3=i;  break;   /* assign the third factor to k3 */
				case 4:
					k4=i;  break;   /* assign the fourth factor to k4 */
				case 5:
					k5=i;  break;   /* assign the fifth factor to k5 */
				case 6:
					k6=i;  break;    /* assign the sixth factor to k6 */
				case 7:
					k7=i;  break;   /* assign the seventh factor to k7 */
				case 8:
					k8=i;  break;    /* assign the eighth factor to k8 */
				case 9:
					k9=i;  break;   /*assign the ninth factor to k9 */
				case 10:
					k10=i;  break;   /* assign the tenth factor to k10 */
				}
			}
		if (s==0)
		{
			printf("%d ,Its factors are ",a);
			if (n>1)  printf("%d,%d",k1,k2);        /* n>1 means a has at least 2 factors*/
			if (n>2)  printf(",%d",k3);             /* n>2 means a has at least 3 factors, so print out another factor*/ 
			if (n>3)  printf(",%d",k4);             /* n>3 means a has at least 4 factors, so print out another factor*/
			if (n>4)  printf(",%d",k5);             /*  Similar */
			if (n>5)  printf(",%d",k6);
			if (n>6)  printf(",%d",k7);
			if (n>7)  printf(",%d",k8);
			if (n>8)  printf(",%d",k9);
			if (n>9)  printf(",%d",k10);
			printf("\n");
		}
	}
	return 0;
}
