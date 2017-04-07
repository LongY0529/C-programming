//8-21
//use pointer to sort n integers in ascending order
//ioput integers in main function and declare another function to sort integers 
#include<stdio.h>
int main()
{
	void sort(int **p,int n);	//declare function sort
 	int i,n,data[20],**p1,*p2[20];	//declare the max number of integers(20) 
 	printf("input n:\n");
 	scanf("%d",&n);	//input the number of integers 
 	for (i = 0; i < n; i++)
   	    p2[i] = &data[i];   //the ith pointer p2 points to the ith integers 
 	printf("input %d integer numbers:",n);	//input n integers 
 	for (i = 0; i < n; i++)	//scan n integers 
   	    scanf("%d",p2[i]);
 	p1 = p2;	//define the pointer 
 	sort(p1,n);	//run function sort
 	printf("Now,the sequence is:\n");	//output the integers in ascending order
 	for (i = 0; i < n; i++)
   	    printf("%d ",*p2[i]);
 	printf("\n");	//change line 
 	return 0;
}	//end main()

void sort(int **p1,int n)
{
	int i,j,*temp;
 	for (i = 0; i < n - 1; i++)	//sort in ascending order(bubble sort)
  	{
		for (j = i + 1; j < n; j++)
     	        {
			if (**(p1+i) > **(p1+j))  //compare the value of two pointer  
       			{
				temp =*(p1+i);	//if the value of pointer p1 + i is greater than the value of pointer p1 + j
				*(p1 + i) = *(p1 + j);	//swap the vaule of two pointer 
				*(p1 + j) = temp;
       			}	//end if 
     		}	//end for 
 	 }	//end for 
}	//end sort()

