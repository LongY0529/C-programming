//4-11
//sort four integers in ascending order
#include <stdio.h>
int main()
{
    int  temp,a,b,c,d;
    printf("input fout integers");  //input four integers
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    printf("%d %d %d, %d\n",a,b,c,d);   //output the initial order
    if (a > b)    //if a > b
    { 
        temp = a;   //swap the value of a and b
        a = b;
        b = temp;
    }
    if (a > c)  //if a > c
    {  
        temp = a;   //swap the value of a and c
        a = c;
        c = temp;
    }
    if (a > d)  //if a > d
    { 
        temp = a;   //swap the value of a and d
        a = d;
        d = temp;
    }
    if (b > c)  //if b > c
    { 
        temp = b;   //swap the value of b and c
        b = c;
        c = temp;
    }
    if (b > d)  //if b > d
    { 
        temp = b;   //swap the value of b and d  
        b = d;
        d = temp;
    }
    if (c > d)  //if c > d
    { 
        temp = c;   //swap the value of c and d
        c = d;
        d = temp;
    }
  printf("new order is %d  %d  %d  %d  \n" ,a,b,c,d);
  return 0;
}   //end main()