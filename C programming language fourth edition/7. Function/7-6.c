//7-6
//merge two string
#include <stdio.h>                                                 
int main()
{
    void merge(char string1[],char string2[],char string[]);  //declare function merge
    char s1[20],s2[40],s[20]; //define the length of s1, s2 and the new string s3
    printf("input string1:"); //input string 1
    scanf("%s",&s1);
    printf("input string2:"); //input string 2
    scanf("%s",&s2);
    merge(s1,s2,s); //run function merge
    printf("new string is %s\n",s); //output the new string
    return 0;
 }  //end main(0)

void merges(char string1[],char string2[],char string[])        
{
    int a,b;
    for (a = 0; string1[a] != '\0'; a++)  //seek for the end of the string 1                                   
        string[a] = string1[a]; //find the end of string 1
    for(b = 0; string2[b] != '\0'; b++) //seek for the end of string 2                                  
        string[a+b] = string2[b]; //find the end of string 2, define it as the end of new string
    string[a + b]='\0'; //end of the new string                                        
} //end merge()
