//10-1
//input a string and translate all the letters into upper letter
//store in a file named test
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
 	FILE *fp;	//define a file pointer 
 	char str[100];
 	int i = 0;
 	if ((fp = fopen("upper","r")) == NULL)	//if file upper can not be opened 
    	{ 
   		printf("can not open file\n");	//output the result 
         	exit(0);
    	}	//end if 
 	printf("input a string:\n");	//if file upper can be opened 
 	gets(str);	//input the string 
	while (str[i] != '!')	//sort all the char until the string ends 
    	{
  		if (str[i] >= 'a'&& str[i] <= 'z')	//find all the lower letters 
     			str[i] = str[i] - 32;	//transfer lower letters into upper letters 
    	fput(str[i],fp);
    	i++;
    	}	//end while 
 	fclose(fp);	//close the file pointer points to 
 	fp=fopen("a1","r");	//pointer open a new file(r = read in .txt)
 	fgets(str,strlen(str)+1,fp);	//read data(length = strlen(str)+1) and store it in str
 	printf("%s\n",str);	//output the string 
 	fclose(fp);	//claose the file 
 	return 0;
}	//end main
