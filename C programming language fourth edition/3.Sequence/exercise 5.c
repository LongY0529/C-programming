//3-5
#include <stdio.h>
int main()
{
    int a,b;
    double x,y;
    char c1,c2;
    printf("input a and b");    //input a and b
    scanf("a = %d,b = %d",&a,&b);
    printf("input x and y");    //input x and y
    scanf("%d%d",&x,&y);
    printf("input c1 and c2");  //input c1 and c2
    scanf("%c%c",&c1,&c2);
    printf("a=%d,b=%d,x=%d,y=%d,c1=%c,c2=%c\n",a,b,x,y,c1,c2);  //output all the elements have been entered
    return 0;
}   //end main()