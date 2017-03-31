//5-17
#include <stdio.h>  
int main()
{
	char i,j,k;            /*i is a's opponent, j is b's opponent, k is c's opponent*/
	for (i='x';i<='z';i++)
		for (j='x';j<='z';j++)
			if (i!=j)
				for (k='x';k<='z';k++)
					if (i!=k && j!=k)
						if (i!='x' && k!='x' && k!='z')
							printf("A--%c\nB--%c\nC--%c\n",i,j,k);
	return 0;

}
