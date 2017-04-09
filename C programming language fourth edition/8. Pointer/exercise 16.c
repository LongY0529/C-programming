//8-16
//input a string including numbers and nonnumeric character, define all consecutive number as a new number.
//store these number in a[0] and output them.
#include <stdio.h>
int main()
{
    char str[20],*p2;	//define the length of string(20)
    int i,j,m,n,d,integer,a[10];
    int *p1;	
    printf("input a string:\n");	//input the string 
    gets(str);
    p1 = &a[0];	//pointer p1 to the head address of a	
    p2 = &str[0];	//pointer p2 points to the head address of string
    integer = 0;	//integer means how many integers in the string
    i = 0;	//i is the ith char in the string 
    j = 0;  //j is the jth integer in the string
    while(*(p2 + i) != '\0')  //sort all the char till the end of the string 
	  {
        if((*(p2 + i) >= '0') && (*(p2 + i) <= '9'))  //if p2 + i pointes to a integer
            j++;  //j + 1
        else  //if points to a non-integer
        {
                if (j > 0)  //if a integer has been found 
                {
                    n = 1;  
	                  for (m = 1; m <= j; m++)  //calculate how mang digits of the integer
	                      n = n*10; //n means digits of the integer
	                      d = d + (*(p2 + i - 1 - k) - 48)*n;  //calculate every digits of the integer
                } //end if  
        *p1 = d;  //pointer p1 points to the integer
        integer++;  //the number of integer + 1
        p1++;   //pointer p1 points to next integer
        j = 0;  //continue searching new integer
        } //end else
    } //end while
    printf("integers are:\n");  //output all the integers
    j = 0;
    p1 = &a[0];
    for (j = 0; j < integer; j++)           
        printf("%d ",*(p1+j));
    return 0;
} //end main()

