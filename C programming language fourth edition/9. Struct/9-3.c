//9-3
//print the scores of 5 students including(num, name and three scores)
#include <stdio.h>
#define N 5	//define how many students will be included

struct student	//define struct
{ 
  char num[10];
  char name[20];
  int score[3];
}
stu[N];

int main()
{
		void score(struct student stu[6]);	//declare function of score
		int i,j;
		for (i = 0; i < N; i++)	//input sutdents' No and name 
		{
			printf("input score of student %d:\n",i + 1);	//input No.
  			printf("student's NO.: ");
  			scanf("%s",stu[i].num);
  			printf("student's name: ");	//input name.
  			scanf("%s",stu[i].name);
  			for (j = 0; j < 3; j++)	//each student includes three scores 
       			{
			 	printf("score %d:",j + 1);
             			scanf("%d",&stu[i].score[j]);
    			}	//end for
  			printf("\n");	//change line 
    		}	//end for
		score(stu);	//list all the scores 
		return 0;
}	//end main()

void score(struct student stu[6])	//define funtion of score
{
 		int i,j;
  		printf("\n   NO.    name   score1   score2   score3\n");	//output data 
  		for (i = 0; i < N; i++)	//output students' No. and name 
   		{
   			 printf("%5s%10s",stu[i].num,stu[i].name);
    		for (j = 0; j < 3; j++)	//output students' score
      		printf("%9d",stu[i].score[j]);
    		printf("\n");
   		}	//end for
}	//end score()

