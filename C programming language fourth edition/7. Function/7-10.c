//7-10
//input a string, find and output the longest word  
#include <stdio.h>
#include <string.h>
int main()
{
	int string(char);	
 	int word(char []);
 	int i;
 char str[100];
 printf("input one str:\n");	//input the string 
 gets(str);		//get the string 
 printf("The longest word is :");	//print the longest word 
 for (i = word(str); string(str[i]); i++)	//output the longest word one char by one char
   printf("%c",str[i]);
 printf("\n");	//change line
 return 0;
}

int string(char c)
{if ((c>='a' && c<='z')||(c>='A'&&c<='z'))
  return(1);
 else
  return(0);
}

int word(char string[])
{int len=0,i,length=0,flag=1,place=0,point;
 for (i=0;i<=strlen(string);i++)
   if (string(string[i]))
     if (flag)
      {point=i;
       flag=0;
      }
     else
       len++;
   else
     {flag=1;
      if (len>=length)
	{length=len;
	 place=point;
	 len=0;
	}
     }
 return(place);
}

