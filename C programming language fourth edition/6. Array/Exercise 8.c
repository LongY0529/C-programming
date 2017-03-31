//6-8
#include <stdio.h>
#define N 4
#define M 5                   /* 4x5 array*/
int main()
{
	int i,j,k,a[N][M],max,maxj,flag;
	printf("please input matrix:\n");
	for (i=0;i<N;i++)           /* input the array*/
		for (j=0;j<M;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<N;i++)
	{
		max=a[i][0];               /* a[i][0] is the greatest at first*/
		maxj=0;                    /* assign the 0th column to maxj*/
		for (j=0;j<M;j++)         /* find the largest number of ith tow*/
			if (a[i][j]>max)
			{
				max=a[i][j];         /* store the largest number of the row to max*/
				maxj=j;              /* store the largest number of column in maxj*/
			}
		flag=1;                   /* first assume is saddle point, then use flag 1 as a symbol*/
		for (k=0;k<N;k++)
			if (max>a[k][maxj])     /* compare the largest number to the other elements in the same column*/
			{
				flag=0;             /* if max is not tha least in the column, it means it is not saddle point  and mark flag as 0 */
				continue;
			}
		if(flag)                  /* if flag is 1 then it is saddle point*/
		{
			printf("a[%d][%d]=%d\n",i,maxj,max);   /* output the number and the location of saddle point */
			break;
		}
	}
	if(!flag)	                   /* if flag is 0, then saddle point doesn't exist*/
		printf("It is not exist!\n");
	return 0;
}
