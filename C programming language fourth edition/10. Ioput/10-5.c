//10-5
//now have 5 students and each students have 3 scores
//input students score, name, NO
//calculate the average score and restore all the data in the file named "stud"
#include <stdio.h>
struct student  //define struct 
{
  	char num[10];
 	char name[8];
 	int score[3];
 	float ave;
} 
stu[5];

int main()
{   
    	int i,j,sum;
    	FILE *fp; //define a file pointer fp
    	for(i = 0; i < 5; i++)  //for all five students, input No and name
    	{
        	printf("student's NO.:"); //input the No 
        	scanf("%s",stu[i].num);
        	printf("student's name:");  //input the name 
        	scanf("%s",stu[i].name);
        	sum=0;
        	for (j = 0; j < 3; j++) //input three scores 
        	{
            		printf("score %d:",j+1);  //input the scores
            		scanf("%d",&stu[i].score[j]);
            		sum += stu[i].score[j];
        	} //end for 
        	stu[i].ave = sum/3; //calculate the average score 
    	} //end for 
    	fp=fopen("stud","w"); //open the file named"stud"
    	for (i = 0; i < 5; i++) 
        	if (fwrite(&stu[i],sizeof(struct student),1,fp) != 1) //if the data of the student can not be saved in to file fp points to 
	          	printf("error\n"); //output error
    	fclose(fp); //close file 
    	fp=fopen("stud","r"); //open the file named stud 
    	for (i = 0; i < 5; i++)
    	{
        	fread(&stu[i],sizeof(struct student),1,fp); //read the data of str[i]
        	printf("\n%s,%s,%d,%d,%d,%6.2f\n",stu[i].num,stu[i].name,stu[i].score[0], //input the data
	        stu[i].score[1],stu[i].score[2],stu[i].ave);
    	} //end for 
    	return 0;
} //end main()
