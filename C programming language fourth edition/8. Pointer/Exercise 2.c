//Exercise 8.2
//Input 3 Strings, print out them in ascending order
#include <stdio.h>
#include <string.h>
///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
 void swap(char *, char *);	//declare function swap
 char str1[20],str2[20],str3[20];	//define string1,2,3(length = 20)
 //----------------------------------------
 printf("input three line:\n");	//input string
 gets(str1);	//input string1 
 gets(str2);	//input string2
 gets(str3);	//input string3
 //-------sort 3 strings in ascending order--------
 if(strcmp(str1,str2) > 0)	// if str1 > str2, then swap str1 and str2, in order to make sure str1 < str2
		swap(str1,str2);
 if(strcmp(str1,str3) > 0) 	// if str1 > str3, then swap str1 and str3, in order to make sure str1 < str3
		swap(str1,str3);
 if(strcmp(str2,str3) > 0)	// if str2 > str3, then swap str2 and str3, in order to make sure str2 < str3
		swap(str2,str3);
 //the above three sentences make sure that  str1 < str2 < str3
 //--------------------------------------------
 
 printf("New order is:\n");	//output new strings
 printf("%s\n%s\n%s\n",str1,str2,str3);
 return 0;
 }	//end main()
 /////////////////////////////////////////////////////////////////////////////////////////
 void swap(char *p1,char *p2)	//this function serves as swapping the two char arrays
 {
	char p[20];	//define a medium string 
  	strcpy(p,p1);	//copy p1 to p 
  	strcpy(p1,p2);	//copy p2 to p1 
  	strcpy(p2,p);	//copy p to p2 
 }	//end swap()

