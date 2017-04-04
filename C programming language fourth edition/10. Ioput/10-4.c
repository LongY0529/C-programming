//10-4
//now have file A and B, both of these two files saves a string
//now merge these two file into a new file named C in the order of letter
#include <stdio.h>
#include <stdlib.h>
int main ()
{
 	FILE *fp;	//define a file pointer fp
 	int i,j,n,i1;
 	char c[20],t,ch;
 	if ((fp = fopen("mergeA","r")) == NULL)	//open file A
    	{ 
   		printf("error!\n");	//if file A can not be opened, print error!
        	exit(0);
    	}	//end if 
 	printf("file A :\n");	
 	for (i = 0; (ch = fgetc(fp)) != EOF; i++)	//get char one by one until all the char has been got
   	{
   		 c[i] = ch;	//restore char in c 
  		 putchar(c[i]);	//output the char 
	}	//end for 
 		 fclose(fp);	//close file
	if ((fp = fopen("mergeB","r")) == NULL)	//open file B
    	{
  		 printf("error!\n"); //if file B can not be opened, print error!
   		 exit(0);
    	}	//end if 
 	printf("B:\n");
 	for (i = 0; (ch = fgetc(fp)) != EOF; i++)  //get char one by one until all the char has been got
    	{
		 c[i] = ch; //restore char in c 
    		 putchar(c[i]);	//output the char 
   	}	//end for 
 	fclose(fp);	//close file 
 	n = i;
 	for (i = 0; i < n; i++)	//sort the order of new string 
  		 for (j = i + 1; j < n; j++)	//sort all the letter in ascending order
      		  	if (c[i] > c[j])
                	{
				t = c[i];
	      			c[i] = c[j];
	      			c[j] = t;
         		}	//end if 
 		 printf("\nfile C :\n");
 		 fp = fopen("MergeC","w");	//open file C
 	for (i = 0; i < n; i++)	//write in the new string 
        {
	 	 putc(c[i],fp);	
      	 	 putchar(c[i]);	
        }//end for 
 	printf("\n");
 	fclose(fp);
 	return 0;
} //end main()
