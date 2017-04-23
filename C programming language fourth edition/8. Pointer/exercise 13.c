//8-13
//use the rectangle method to calculate the definite integral
#include<stdio.h>
#include<math.h>
int main()
{
    float integral(float(*)(float),float,float,int);    //declare function declare
    float sin(float);   //declare function sin         
    float cos(float);   //declare function cos          
    float index(float); //declare function index          
    int n=100;  //declare the number of rectangles
    printf("input a1,b1:"); //input a1 and b2
    scanf("%f,%f",&a1,&b1);
    printf("input a2,b2:"); //input a2 and b2
    scanf("%f,%f",&a2,&b2);
    printf("input a3,b3:"); //input a3 and b3 
    scanf("%f,%f",&a3,&b3);
    p= sin(n);  //run function sin
    c= integral(p,a1,b1,n); //run function intgral
    printf("The result is:%f\n",c); //output the result
    p= cos(n);  //run function cos
    c= integral(p,a2,b2,n); //run function integral
    printf("The integral of cos(x) is:%f\n",c); //output the result
    p= index(n);    //run function index
    c= integral(p,a3,b3,n); //run function integral
    printf("The integral of index(x) is:%f\n",c);   //output the result
    return 0;
}   //end main()

float integral(float(*p)(float),float a,float b,int n)
{
    int i;
    float x,r,s;
    r = (b - a) / n;    //use rectangle method, r is the wide of the rectangle
    x = a;  //x is the length of the rectangle
    s = 0;
    for(i = 1; i < n; i++)  //calculate all the area of rectangle
    {
        x= x + r;
        s=s + (*p)(x)*r;
    }   //end for 
    return(s);
}   //end integral()
  
float sin(float x)
{
    float n;
    n = sin(x); //run function sin
    return n);  //return result to main function
}   //end sin()

float cos(float x)
{
    float n;
    n = cos(x); //run function cos
    return n;   //return result to main function
}   //end cos()

float index(float x)
{
    float n;
    n = index(x);   //run function index
    return index(x);    //return result to main function
}   //end index()
