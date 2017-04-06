//8-4
//input an array of integers 
//enter a number you want to move the integer
//output the new array
#include <stdio.h>
int main()  
{
	void move(int [20],int,int);	//declare function move
 	int number[20],n,m,i;	//input the max length of array(20), the number of integers(n) and the place you want to move(m)
 	printf("how many numbers?");
 	scanf("%d",&n);	//input the number of integers
 	printf("input %d numbers:\n",n);
	for (i = 0; i < n ; i++)	//input the list of integers
      	 scanf("%d",&number[i]);
 	printf("how many place you want move?");
 	scanf("%d",&m);	//input the place you want to move
 	move(number,n,m);	//run function move
	printf("sorted order:\n"); 
 	for (i = 0 ; i < n ; i++)
      	 printf("%d  ",number[i]);	//output the new order
 	printf("\n");
 	return 0;
}	//end main()

void move(int array[20],int n,int m)   
{ 
  	int *p,end;	//define a pointer 
  	end=*(array+n-1);	//define the place the integer starts to move 
  	for (p = array+n-1; p>array ; p--)
      	*p=*(p-1);	//move the integers forward
  	*array=end;
	m--;
    if (m > 0) 
        move(array,n,m);  
}	//end move()
 

