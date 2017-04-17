//3-7
//calculate the perimeter, area, volume and surface area
#include <stdio.h>
int main ()
{
    double h,r,l,s;
    double ss,vs,vc;
    double pai=3.14;
    printf("enter the radius r and height h");  //input the radius and height
    scanf("%d,%d",&r,&h);               
    l=2*pi*r;   //calculate the perimeter                         
    s=r*r*pi;   //calculate the area of circle                         
    ss=4*pi*r*r;    //calculate the surface area of sphere             
    vs=3.0/4.0*pi*r*r*r;    //calculate the volume of sphere 
    vc=pi*r*r*h;    //calculate the volume of cylinder        
    printf("the perimeter of circle = %6.2f\n",l);  //output all the result
    printf("the area of circle = %6.2f\n",s); 
    printf("the surface area of sphere =%6.2f\n",ss);
    printf("the volume of sphere = %6.2f\n",vs);
    printf("the volume of cylinder = %6.2f\n",vc);
    return 0;
}   //end main()