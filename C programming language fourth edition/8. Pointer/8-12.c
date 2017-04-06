//8-12
//input 10 strings(different length), sort all the string in ascending order in another function and output it
#include <stdio.h>
#include <string.h>
int main()
{
    void sort(char *s[]); //declare function sort
    int i;
    char str[10][20];
    printf("input 10 strings with same length:\n"); //input 10 strings with different length
    for (i = 0; i < 10; i++)
        scanf("%s",str[i]);
    sort(str);  //run function sort
    printf("new strings are:\n");   //output 10 strings in new order
    for (i = 0; i < 10; i++)
        printf("%s\n",str[i]);
    return 0;
}   //end main()

void sort(char *s[])
{
    int i,j,n;
    char *temp;
    for (i = 0; i < 9; i++) //sort all the strings 
        for (j = 0; j < 9 - i; j++)
            if (s[j+n] > s[j+n+1])  //if string j + n > string j + n + 1
            {
                strcpy(temp,s[j+n]); //copy string j+n in temp
                strcpy(s[j+n],s[j+n+1]);   //copy string j + n + 1 into string j + n
                strcpy(s[j+n+1],temp);   //copy temp into string j + n + 1
            }   //end if 
}   //end sort()