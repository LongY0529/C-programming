//3-3
//calculate the result of a formula
#include <stdio.h>
#include <math.h>
int main()
{
    double d=300000;    //define the initial value of each element in the formula
    double p=6000;
    double r=0.01,m;
    m = log10(p / (p - d*r)) / log10(1 + r);    //define the formula
    printf("m = %d\n",m);   //output the result 
    return 0;
}   //end main()