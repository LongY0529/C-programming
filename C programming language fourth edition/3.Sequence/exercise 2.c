//3-2
//if one man has 1000 RMB and want to deposit for 5 years
//calculate the accrual of each way to deposit
#include <stdio.h>
#include <math.h>
int main()
{
    double r5,r3,r2,r1,r0,p,p1,p2,p3,p4,p5;
    p=1000; //define the principal
    r0=0.0072;  //define each year's interest rate
    r1=0.0414;
    r2=0.0468;
    r3=0.054;
    r5=0.0585;
    p1 = p*((1 + r5) * 5);            //deposit 5 years
    p2 = p*(1 + 2*r2) * (1 + 3 * r3);     //first deposit 2 years and then deposit 3 years
    p3 = p*(1 + 3*r3) * (1 + 2 * r2);     //first deposit 3 years and then deposit 2 years 
    p4 = p*pow(1 + r1,5);           //deposit every year
    p5 = p*pow(1 + r0 / 4,4 * 5);       //current deposit
    printf("p1 = %f\n",p1);       //output the money will earn in 1st way
    printf("p2 = %f\n",p2);       //output the money will earn in 2nd way
    printf("p3 = %f\n",p3);       //output the money will earn in 3rd way
    printf("p4 = %f\n",p4);       //output the money will earn in 4th way
    printf("p5 = %f\n",p5);       //output the money will earn in 5th way
}   //end main()