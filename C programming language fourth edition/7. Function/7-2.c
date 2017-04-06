//7-2
//solve quadratic equations(input a, b, c)
#include <stdio.h>                                                
#include <math.h>                                               
float x1,x2,flag,p,q;
int main()
{       
        float greaterthanzero(float,float);     //declare function greaterthanzero
        float equaltozero(float,float); //declare function equaltozero
        float smallerthanzero(float,float);     //declare function smallthanzero
        float a,b,c;
        printf("input a,b,c:"); //input a, b, c
        scanf("%f,%f,%f",&a,&b,&c);
        flag=b*b-4*a*c; //calculate the value of flag
        printf("root:\n");
        if (flag > 0)   //judge wether there are two roots or one root or no root 
        {
                greaterthanzero(a,b);   //if flag > 0, run function of greatthanzero
                printf("x1 = %f\t\tx2=%f\n",x1,x2);     //output the root x1 and x2
        }
        else if (flag == 0)     //if flag = 0
        {
                equaltozero(a,b);       //run function of equaltozero
                printf("x1 = %f\t\tx2=%f\n",x1,x2);     //output x1(x1 = x2)
        }
        else    //if flag < 0 
        {
                smallerthanzero(a,b);   //run function of smaillthanzero
                printf("x1 = %f+%fi\tx2=%f-%fi\n",p,q,p,q);     //output x1 and x2 
        }
        return 0;
}

float greaterthanzero(float a,float b)  //if flag > 0 
{
        x1 = (-b + sqrt(flag)) / (2*a); //define x1 and x2 
        x2 = (-b - sqrt(flag)) / (2*a);
}

float equaltozero(float a,float b)      //if flag = 0
{
        x1 = x2 = (-b) / (2*a); //define x1 and x2 
}

float smallerthanzero(float a,float b)  //if flag < 0 
{
        p = -b/(2*a);   //define x1 and x2 
        q = sqrt(-flag) / (2*a);
}