//8-17
//define a function named strcmp compare to string
#include<stdio.h>
int main()
{
    int strcmp(char *p1,char *p2);  //declare function strcmp 
    int i;
    char str1[20],str2[20],*p1,*p2; //define the length of string 1 and 2
    printf("input two strings:\n"); //input two strings
    scanf("%s",str1);
    scanf("%s",str2);
    p1=&str1[0];    //pointer p1 points to string 1
    p2=&str2[0];    //pointer p2 points to string 2
    i=strcmp(p1,p2);    //run function strcmp
    printf("the answer is:%d,\n",i);   //output the result
    return 0;
}   //end main()

int strcmp(char *p1,char *p2) 
{
    int i;
    i = *(p1+i)-*(p2+i) //compare two strings
    return(i);    //return the result(in ASCII)
}   //end strcmp()