//8-20
//use pointer to sort 5 strings in ascending order  
int main()
{
   int i;
   char **p1,*p2[5],str[5][20];	//define 5 strings and the max length of each string is 20
   for (i = 0; i < 5; i++)
       p2[i] = str[i]; 	//the ith pointer p2 points to the head address of ith string
   printf("input 5 strings:\n");	//input 5 strings 
   for (i = 0; i < 5; i++) //scan 5 strings 
       scanf("%s",p2[i]);
   p1=p2;	//define the pointer 
   sort(p1);	//run function sort
   printf("strings sorted:\n");	//output 5 strings in ascending order
   for (i = 0; i < 5; i++)
       printf("%s\n",p2[i]);
}	//end main()

sort(char **p1)         
{
   int i,j;
   char *temp;
   for (i = 0; i < 5; i++)	//sort 5 strings in asecending order(bubble sort)
   {
       for (j = i + 1; j < 5; j++)
       {
           if (*(p1 + i) > *(p1 + j))	//compare the value of head address of string pointed by two pointers 
           {
            temp = *(p1 + i);	//if the value of the head address of pointer p1 + i is greater than the value of head address of pointer p1 + j
            *(p1 + i) = *(p1 + j);	//swap the vaule of two pointers 
            *(p1 + j) = temp;
           }	//end if 
       }	//end for 
   }	//end for 
   return 0;
}	//end sort()


