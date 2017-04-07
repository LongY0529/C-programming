//8-7
//string 1 has n char, copy all the char from m of the string 1 into a new string
#include <stdio.h>
#include <string.h>
int main()
{
    void copy(char *,char *,int);   //declare function copy
    int m;
    char str1[20],str2[20]; //define the length of string 1 and string 2
    printf("input string:");    //input string 1 
    gets(str1);
    printf("start from where?");    //decide where to copy(m)
    scanf("%d",&m);
    if (strlen(str1) < m)   //if m > the length of string 1
        printf("error!"); //output error
    else
    {
        copy(str1,str2,m);   //if m < the length of string 1, run function copy
        printf("result:%s\n",str2); //output the new string
    }   //end else
    return 0;
}   //end main()

void copy(char *p1,char *p2,int m)  //define two pointer p1 and p2  
{
    int n;
    n = 0;
    while (n < m - 1)   //scan all the char after m  
    {
        n++;    
        p1++;
    }   //end while
    while (*p1 != '\0') // till pointer p1 not points to the end of the string 
    {
        *p2=*p1;    //store the chat of p1 into p2 
        p1++;   //continue scan 
        p2++;
    }   //end while
    *p2 = '\0'; //end of the string pointer p2 points to
}   //end copy()
