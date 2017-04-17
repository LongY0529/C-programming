//4-10
//calculate the commission
#include <stdio.h>
int main()
{
    int i;
    double n,n1,n2,n3,n4,n5;
    printf("input the profit:");    //input the profit 
    scanf("%d",&i);
    n1=100000*0.1;  //calculate the commission is every way
    n2=n1+100000*0.075;
    n3=n2+100000*0.05;
    n4=n3+100000*0.03;
    n5=n4+400000*0.015
    if (i <= 100000)    //if the profit <= 100000
        n = i*0.1;  //calculate the commission
    else if (i <= 200000)   //if the profit is in the range of 100000-200000
        n = n1 + (i - 100000)*0.075;  //calculate the commission
    else if (i <= 400000)   //if the profit is in the range of 200000-400000
        n = n2 + (i-200000)*0.05;  //calculate the commission
    else if (i <= 600000)   //if the profit is in the range of 400000-600000
        n = n3 + (i-400000)*0.03;  //calculate the commission
    else if (i <= 1000000)  //if the profit is in the range of 600000-100000
        n = n4 + (i-600000)*0.015;  //calculate the commission
    else    //if the profit > 1000000
        n = n5+(i-1000000)*0.01;  //calculate the commission
    printf("the commission is %10.2f\n",n); //output the commission
    return 0;
}  //end main()
