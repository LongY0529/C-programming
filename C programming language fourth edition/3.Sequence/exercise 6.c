//3-6
//transfer char CHINA into GLMRE(char + 4)
#include <stdio.h>
int main()
{
    char c1='C';    //define initial char CHINA
    char c2='h';
    char c3='i';
    char c4='n';
    char c5='a';
    c1=c1+4;    //transfer CHINA into GLMRE
    c2=c2+4;
    c3=c3+4;
    c4=c4+4;
    c5=c5+4;
 printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5); //output the result
 return 0;
}   //end main()