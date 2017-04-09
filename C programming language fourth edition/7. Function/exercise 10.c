//7-10
//input a string and output the longest word in it
#include <stdio.h>
#include <string.h>
int main()
{
    int string(char);   //declare function string
    int i;
    char str[20];  //define the max length of string
    printf("input the string:\n"); //input the string
    gets(str);
    printf("the longest word is :");    //output the longest word
    for (i == word(str); string(str[i]); i++)   //output the char one by one 
        printf("%c",str[i]);
    return 0;
}   //end main()

int string(char c)
{
    int i,length = 0, location = 0, p;
    if ((c >='a' && c <='z')||(c >= 'A'&& c <='z')) //count all the char in the string, if it is letter, continue
        for (i = 0; i <= strlen(string); i++)   //count till the end of the string
            if (len >= length)  //judge if it is the longest word
	        {
                length = len;   //if it is the longest word
	            location = p;   //output the word
            }   //end if 
    return(location);
}   //end string()
