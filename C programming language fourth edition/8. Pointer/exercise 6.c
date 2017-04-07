//8-6
//calculate the len of the string
#include <stdio.h>
int main()
{
	int len(char *p);
	int n;
	char str[20];	//define the lengt of the string
	printf("input string:");
	scanf("%s",str);	//input the string
	n = len(str);	//run function length
	printf("The len of string is %d.\n",n);	//output the length of the string
	return 0;
}	//end main()

int len(char *p)          
{
	int n;
 	n = 0;	//define the initial n
 	while (*p !='\0')	//when the string is not end
    {
  		   n++;	//length + 1 
   		   p++;	//pointer move to the next char until the string ends
    }	//end while 
 return(n);
}	//end len()
