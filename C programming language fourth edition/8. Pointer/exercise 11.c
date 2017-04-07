//8-11
//input 10 strings(same length), sort all the string in ascending order in another function nad output it
#include <stdio.h>
#include <string.h>
int main()
{
    void sort(char s[10][20]); //declare function sort
    int i;
    char str[10][6];
    printf("input 10 strings with same length:\n"); //input 10 strings with same length
    for (i = 0; i < 10; i++)
        scanf("%s",str[i]);
    sort(str);  //run function sort
    printf("new strings are:\n");   //output 10 strings in new order
    for (i = 0; i < 10; i++)
        printf("%s\n",str[i]);
    return 0;
}   //end main()

void sort(char s[10][20])
{
    int i,j;
    char *temp;
    for (i = 0; i < 9; i++) //sort all the strings 
        for (j = 0; j < 9 - i; j++)
            if (s[j] > s[j+1])  //if string j > string j +1 
            {
                strcpy(temp,s[j]); //copy string j in temp
                strcpy(s[j],s[j+1]);   //copy string j + 1 into string j
                strcpy(s[j+1],temp);   //copy temp into string j + 1
            }   //end if 
}   //end sort()
