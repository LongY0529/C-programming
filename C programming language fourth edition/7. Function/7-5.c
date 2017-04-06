//7-5
//inverse an input string and output it in the main function
#include <stdio.h>      
#include <string.h>
int main()
{
    void inverse(char str[]);   //declare function inverse
    char str[20];   //define the length of string 
    printf("input a string:");    //input the string 
    scanf("%s",str);
    inverse(str);   //run function inverse
    printf("new string:%s\n",str);  //output the new string
    return 0;
}//end main()

void inverse(char str[])
{
    char a;
    int b,c;
    for (b =0 , c = strlen(str); b < (strlen(str) / 2); b++, c--)   //define two pointers b and c, b starts at the head of the string, c starts at the end of the string
    {
        a = str[b]; //store the char of b in a 
        str[b] = str[c-1];  //swap the char of b and c -1 
        str[c-1] = a;   //return the char stored in a to c - 1
    }   //end for
}   //end inverse()
