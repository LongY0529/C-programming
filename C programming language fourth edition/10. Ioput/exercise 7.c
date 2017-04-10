//10-7
//based on 10-6, insert a student's data including 3 scores 
//calculate the average score and sort the data in ascending order
#include <stdio.h>
#include <stdlib.h>
struct student	//define struct
{
	char num[10];
 	char name[10];
 	int score[3];
 	float ave;
}  
st[10],s;

int main()
{
 	FILE *fp,*fp1;	//declare file pointer fp and fp1
  	int i,j,t,n;
  	printf("student name:");	//input student's name
  	scanf("%s",s.name);
  	printf("student No:");	//input student's No		
  	scanf("%s",s.num);
  	printf("score1,score2,score3:");	//input 3 scores of student
  	scanf("%d,%d,%d",&s.score[0],&s.score[1],&s.score[2]);
  	s.ave=(s.score[0]+s.score[1]+s.score[2]) / 3;	//calculate the average score of student
  	if((fp = fopen("stu_sort","r")) == NULL)	//if file can not be opened
    {
		printf("error!.");	//output error
     	exit(0);
    }	//end if 
  	printf("students' data:\n");	//if the file can be opened
    	for (i = 0;fread(&st[i],sizeof(struct student),1,fp) != 0; i++)	//read all the data from struct i 
      	{
		  	printf("\n%8s%8s",st[i].num,st[i].name);	//output the student's name and No
         	for (j = 0; j < 3; j++)
	       		printf("%d",st[i].score[j]);	//output 3 scores of the student
       		printf("%f",st[i].ave);	//output the average score of student
      	}	//end for 
	n = i;
  	for (t = 0;st[t].ave > s.ave && t < n; t++);
  	printf("Now:\n");
  	fp1 = fopen("sort data","w");	//open file sort data
  	for (i = 0; i < t; i++)
    {
		fwrite(&st[i],sizeof(struct student),1,fp1);	//read all the data from struct i
     	printf("\n %s%s",st[i].num,st[i].name);	//output the student's name and No
     	for (j = 0; j < 3; j++)
       		printf("%d",st[i].score[j]);	//output 3 scores of student
     	printf("%f",st[i].ave);
    }	//end for 
  	fclose(fp);
  	fclose(fp1);
  	return 0;
 }	//end main()

