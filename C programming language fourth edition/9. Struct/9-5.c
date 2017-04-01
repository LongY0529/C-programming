//9-5
//input 10 students' No, name and three scores
//output the average score of each student and the data of the student with the highest score 
#include <stdio.h>
#include <stdlib.h>
#define N 10
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
  	if ((fp = fopen("stud","r")) == NULL)	//if file 'stud' can not be opened 
    {
		 printf("error!\n");	//output error! 
     	 exit(0);
    }	//end if 
  	printf("File 'stud': ");	//if file stud can be opened 
  	for (i = 0;fread(&st[i],sizeof(struct student),1,fp) != 0; i++)	//read data from file till the file ends(= 0)
    {
		 printf("\n%8s%8s",st[i].num,st[i].name);	//input num and name 
     	 for (j = 0; j < 3; j++)	//each name includes 3 scores 
	  		  printf("%8d",st[i].score[j]);	//input scores 
    printf("%10.2f",st[i].ave);
    }	//end for 
  	printf("\n");	//change line 
  	fclose(fp);	//close file 
 	 n = i;
  	for (i = 0; i < n; i++)	//sort score in ascending order(bubble sort)
     	 for (j = i + 1; j < n; j++)
			  if (st[i].ave < st[j].ave)
	  		  {
				temp = st[i];
	   			st[i] = st[j];
	   			st[j] = temp;
	  		  }	//end if 
  	printf("New order is:");
  	fp = fopen("stu_sort","w");	//open and write file 
  	for (i = 0; i < n; i++)	//output the new order 
    {
	 	 fwrite(&st[i],sizeof(struct student),1,fp);	//wrtie data from st[i](length = sizeof(struct student) into file 
     	 printf("\n%8s%8s",st[i].num,st[i].name);	//write num and name 
      	 for (j = 0; j < 3; j++)
	     	  printf ("%8d",st[i].score[j]);	//write scores 
         printf("%10.2f",st[i].ave);
     }	//end for 
  	printf("\n");
  	fclose(fp);	//close file 
  	return 0;
}	//end main()
