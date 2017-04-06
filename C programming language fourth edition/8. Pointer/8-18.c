//8-18
//define a function(use pointer)  whenever a integer is entered, return the month which is matched 
#include <stdio.h>
int main()
{char *month[12]={"January","February","March","April",
   "May","June","july","August","September","October", "November","December"};	//define the pointer month
int n;
printf("input a integer blow 12:\n");	//input the integer
scanf("%d",&n);
if ((n <= 12) && (n >= 1))	//judge wether the integer is legal( < 12)
   printf("It is %s.\n",*( month + n - 1));	//if true, output the month
else
  printf("error!\n");	//if not, output error 
return 0;
}	//end main()


