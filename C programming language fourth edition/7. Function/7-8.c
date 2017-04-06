//7-8
//input a four figures number and output a string with 'space' in each integer
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];   //define the length of string 
    void insert(char []);   //declare function insert space
    printf("input a four figures number:"); //input a four figures number
    scanf("%s",str);    //scan the number as string 
    insert(str);    //run function insert
    return 0;
}   //end main()

void insert(char str[])
{
    int i;
    for (i = strlen(str); i > 0; i--)   //get the length of string 
    {   
        str[2*i] = str[i];  //double the length of string
        str[2*i - 1] = ' '; //insert space in new empty char 
    }
    printf("output:\n%s",str);  //output the new string
}   //end insert()
