#include <stdio.h>//sort and swap string
#include <string.h>
//----------------------------------------
int main()
{

 void swap(char *,char *);
 char str1[20],str2[20],str3[20];//define string(length = 20)
 //----------------------------------------
 
 printf("input three line:\n");//input string
 gets(str1);//input string1 
 gets(str2);//input string2
 gets(str3);//input string3
 //------------------------------------------
 
 if(strcmp(str1,str2)>0)//sort string 
		swap(str1,str2);
 
 if(strcmp(str1,str3)>0)  
		swap(str1,str3);
 
 if(strcmp(str2,str3)>0)  
		swap(str2,str3);
 //--------------------------------------------
 
 printf("New order is:\n");//output new strings
 printf("%s\n%s\n%s\n",str1,str2,str3);
 return 0;
 }//end main()

 void swap(char *p1,char *p2)//define function of swap
 {char p[20];//define a medium string 
  strcpy(p,p1);//copy p1 to p 
  strcpy(p1,p2);//copy p2 to p1 
  strcpy(p2,p);//copy p to p2 
 }//end sawp()

