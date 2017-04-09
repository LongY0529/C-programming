//8-15
//find the studnet average score
//output No, name scores of 3 classese and average score
#include <stdio.h>
#define N 10//define length of the list 
struct student //define struct
{ 
	char num[20];
	char name[10];
	float score[3];
	float avr;
} stu[N];

int main()  //student score
{ 
	int i,j,maxi;
  	float sum,max,average;
  	for (i = 0; i < N; i++) //input all the data 
    {
		printf("input scores of student %d:\n",i + 1);  //input scores 
        printf("NO.:"); //input No.
        scanf("%s",stu[i].num);
     	printf("name:");    //input name 
        scanf("%s",stu[i].name);
        for (j = 0; j < 3; j++) //each name includes 3 scores
        {
	        printf("score %d:",j+1);    //input scores 
	        scanf("%f",&stu[i].score[j]);
        }   //end for
    }   //end for
    average = 0;    //define initial average 
  	max = 0;    //define initial max score
  	maxi = 0;   //define the studemt with the highest score
  	for (i = 0; i < N; i++) //calculate the average score and max score
    {
		sum=0;  //sum all the scores
        for (j = 0; j < 3; j++)
            sum += stu[i].score[j]; //calculate the sum 
    	stu[i].avr = sum/3; //calculate the average
        average += stu[i].avr;
     	if (sum > max)  //judge the highest average score
        {
			    max = sum;
                maxi = i;
        }   //end if
    }   //end for
    average/=N;
	printf("NO. name score1 score2 score3 average\n");
  	for (i = 0; i < N; i++)
    {
		 printf("%s%s",stu[i].num,stu[i].name);//output students' num and name 
         for (j = 0; j < 3; j++)
         printf("%f",stu[i].score[j]);  //output students score
    printf("    %f\n",stu[i].avr);
    }   //end for 
    printf("average = %f\n",average);   //output average 
    printf("The highest score is : student %s,%s\n",stu[maxi].num,stu[maxi].name);
	printf("his scores are:%f,%f,%f,average:%f.\n",
	    stu[maxi].score[0],stu[maxi].score[1],stu[maxi].score[2],stu[maxi].avr);
	return 0;
 }  //end main()
