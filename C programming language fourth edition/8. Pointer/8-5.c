//8-5
//define n people as a circle and count number from 1 to 3 to all these people
//whoever called 3 leaves the circle
#include <stdio.h>
int main()
{
	int i,k,m,n,num[50],*p;
 	printf("\ninput number of person: n=");	//input the number of people(n)
 	scanf("%d",&n);
 	p=num;	//defien the pointer p
 	for (i = 0; i < n; i++)	//count all the people in the circle 
   	     *(p + i) = i + 1;	//define pointer points to every people       
 	i = 0;                 
 	k = 0;                  
 	m = 0;               
 	while (m < n-1)        
    {
  		if (*(p + i) != 0)  
		  	k++;
   			if (k == 3)                      
     		{
			 *(p + i) = 0;
      		 k = 0;
     		 m++;
     		}//end if 
   		i++;
   		if (i == n) 
		     i = 0;                
    }//end while 
 	while(*p == 0) 
	 	p++;
 	printf("The last one is NO.%d\n",*p);	
 	return 0;
}	//end main()
