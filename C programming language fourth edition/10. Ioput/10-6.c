//10-6
//sort the average score in ascending order and saved in a new file named "stu_sort"
#include <stdio.h>
#include <stdlib.h>
#define N 5
struct student	//define struct 
{
	char num[10];
 	char name[8];
 	int score[3];
 	float ave;
} 
st[N],temp;

int main()
{
 	FILE *fp;	//define a file pointer fp
 	int i,j,n;
  	if ((fp = fopen("stud","r")) == NULL)	//open file stdu
    {
		 printf("error!\n");	//if file stdu can not be opened, output error!
     	 exit(0);
    }//end if 
  	printf("File 'stud': ");	//if file stdu can be opened 
  	for (i = 0;fread(&st[i],sizeof(struct student),1,fp) != 0; i++)	//input the data
    {
		 printf("\n%8s%8s",st[i].num,st[i].name);
     	 for (j = 0; j < 3; j++)
	  		  printf("%8d",st[i].score[j]);
    printf("%10.2f",st[i].ave);
    }//end for 
  	printf("\n");
  	fclose(fp);
 	n = i;
  	for (i = 0; i < n; i++)
     	for (j = i + 1; j < n; j++) //sort score in ascending order
			  if (st[i].ave < st[j].ave)
	  		  {
				temp = st[i];
	   			st[i] = st[j];
	   			st[j] = temp;
	  		  }	//end if 
  	printf("New order:");	//output the new order of students
  	fp = fopen("stu_sort","w");	//open the file "stu_sort"
  	for (i = 0; i < n; i++)	//output the new order 
        {
	 	fwrite(&st[i],sizeof(struct student), 1, fp);	//write the data into new file 
     	 	printf("\n%8s%8s",st[i].num,st[i].name);
      	 for (j = 0; j < 3; j++)
	     	 printf ("%8d",st[i].score[j]);
         printf("%10.2f",st[i].ave);
         }	//end for 
  	printf("\n");
  	fclose(fp);
  	return 0;
}	//end main()
