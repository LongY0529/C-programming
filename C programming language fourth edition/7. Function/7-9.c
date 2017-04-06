//7-9
//input a string and count the number of all the char including letter, integer, 'space' and other.
#include <stdio.h>
int main()
{
    void count(char []);    //declare function count
    int letter,integer,space,other;
    char str[20];   //define the length of string                                     
    printf("input string:\n");  //input the string
    gets(str);  
    puts(str);                
    letter=0;   //define the initial number of letter
    integer=0;  //define the initial number of integer
    space=0;    //define the initial number of 'space'
    other=0;   //define the initial number of other
    count(str); //run function of count 
    printf("\nletter:%d\ninteger:%d\nspace:%d\nother:%d\n",letter,integer,space,other);
    return 0;
}   //end main()                                                                    

 void count(char str[])
{
    int i;
    int letter,integer,space,other;
    for (i=0 ; str[i]!='\0' ; i++ ) //seek all the char in the string
    if ((str[i] >= 'a' && str[i] <='z')||(str[i] >= 'A' && str[i] <= 'Z'))  //if the char is a letter
        letter++;   //the number of letter + 1
    else if (str[i] >= '0' && str [i]<='9') //if the char is a integer
        integer++;  //the number of integer + 1
    else if (str[i] == 32)  //if the char is a 'space'
        space++;    //the number of 'space + 1
    else    //if the char not belongs to all three above
        other++;   //the number of pthers + 1
}   //end count()                                                                    
