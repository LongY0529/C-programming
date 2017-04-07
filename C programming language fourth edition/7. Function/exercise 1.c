//7-1
//declare function to calculate the least commom multiple number and the greatest common divisor 
#include <stdio.h>
int gcd,Lcd;
int main()
{
 	 void gcd(int,int);	//declare function of gcd(greatest common divisor) 
   void lcm(int,int); 	//declare function of lcm(least common multiple number)
   int u,v;
   scanf("%d,%d",&u,&v);	//input two integers u and v
   gcd(u,v);	//run function gcd
   lcm(u,v);	//run function lcm
   printf("greatest common divisor = %d\n",gcd);	//output greatest common divisor
   printf("least common multiple number = %d\n",lcm); //output least common multiple number
   return 0;
}	//end main()

void gcd(int u,int v)	
{
   int t,r;
   if (v>u) //judge the smaller one of u and v , if v is larger than u
   {
    t = u; //swap the value of u and v
    u = v;
    v = t;
   }
   while ((r=u%v)!=0)	//if v is not the multiple of u 
   {
    u = v;	//swap the value of u and v
    v = r;
   }
   gcd=v;	//greatest common divisor 
}	//end void()

void lcm(int u,int v)
{
   lcm=u*v/gcd;	//calculate the least common multiple number
}	//end void()


