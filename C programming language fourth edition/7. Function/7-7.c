//7-7
//input a string, find all the vowel letters in it and store these letters in a new string
#include <stdio.h>
int main()
{
    void seek(char [],char []); //declare function seek
    char str[20],c[20]; //define the length of two string
    printf("input string:");  //input the string
    gets(str);
    seek(str,c);  //run function seek
    printf("The vowel letters are:%s\n",c); //output the new string
    return 0;
} //end main()

void seek(char s[],char c[])
{ 
    int i,j;
    for (i=0,j=0;s[i]!='\0';i++)  //seek all the char in the string
        if (s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||
            s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')  //if find the letter in this list(vowel letter)
	      {
            c[j]=s[i];  //store it in string c
	          j++;  //continue seeking
	      }
    c[j]='\0';  //end seeking
} //end seek()
