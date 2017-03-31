//5-2
#include <stdio.h>
#include <math.h>                 
int main()
{
	int sign=1,count=0;              // sign for the mark of the value, count for calculating the time of the loop
	double pi=0.0,n=1.0,term=1.0;    // pi at first refer to polynomial value，at last refer to the PI, n for denominator，term refer to the value of the current term
	while(fabs(term)>=1e-8)          // test whether the absolute number of term is greater or equal to 10(-6) power
	{
		pi=pi+term;                     // accumulate term to pi
		n=n+2;                          // n+2 is the next term's denominator
		sign=-sign;                     // sign for the mark, the latter term's mark is opposite from the one before it
		term=sign/n;                    // calculate the value of the next term
		count++;                        // add one to count
	}
	pi=pi*4;                         // the sum of the polynomial pi multiply 4 is the approximate number of PI
	printf("pi=%10.8f\n",pi);        // output the approximate number of PI
	printf("count=%d\n",count);      // output the number of loop
	return 0;
}
