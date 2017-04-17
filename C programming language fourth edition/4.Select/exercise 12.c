//4-12
//there are four towers which centers are (2,2), (-2, 2), (-2, -2), (2,-2) and the radius is 1
//the height of tower is 10 and all the other places' height is 0
#include <stdio.h>
#include <math.h>
int main()
{
    int  h=10;
    double x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2;
    double x,y,d1,d2,d3,d4;
    printf("enter a coordinate");   //input the coordinate
    scanf("%d,%d",&x,&y);
    d1=sqrt((x-x4)*(x-x4)+(y-y4)*(y-y4));   //calculate the length of this coordinate to each center
    d2=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    d3=sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
    d4=sqrt((x-x3)*(x-x3)+(y-y3)*(y-y3));
    if ( d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1)  //if the coordinate is not in the range of four towers   
        h = 0;  //height = 0
        printf("height = %d\n",h); //output the height
    else    //if the coordinate is in the range of four towers
        h = 10; //height = 10
        printf("height = %d\n",h); //output the height
    return 0;
}   //end main()