//9-6
//define 13 people from 1 to 3
//call their numbers and all the people with the number 3 leave the circle
//find the people stay in the circle 
#include <stdio.h>
#define N 13	//define number of people 

struct person	//define struct 
{
 	int number;
  	int flag;
} 
stu[N+1];

int main()
{
 	int i,flag,h;
  	for (i = 1; i <= N; i++)	//for all 13 people in the circle 
    	{
		if (i == N)	//if count number to the last people 
			stu[i].flag = 1;	//set the flag as 1
    		else
       			stu[i].flag = i + 1;	//if dont count to last people, set flag as i + 1
     			stu[i].number = i;	//set the number of this people is i
    	}	///end for 
  	printf("\n");
  	flag = 1;
  	h = N;
  	printf("people leave the circle:\n");	//output the number leave the circle 
  	while(flag < N-1)	//if dont count to the last people
    	{
		i = 0;
     		while(i != 3)	//if the number is not 3
            	{
	   		h = stu[h].flag;
	    		i++;	//continue to count
            	}	//end while 
    		printf("%4d",stu[h].number);	//output the number 
    		stu[h].number = 0;	
     		flag++;
    	}	//end while 
  	printf("\nThe last student is ");
  	for (i = 1; i <= N; i++)	//output the result 
    		if (stu[i].number)
      			printf("%3d",stu[i].number);
  		printf("\n");
  	return 0;
}	//end main()


