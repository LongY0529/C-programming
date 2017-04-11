//9-4
//base on 9-3, declare a function to input the data of students
void input(struct student stu[])    //declare function of input scores
{
    int i,j;
    for (i = 0; i < N; i++) //input students' No and name
    { 
        printf("input scores of student %d:\n",i+1);
        printf("student's No.: ");  //input the student's No
        scanf("%s",stu[i].num);
        printf("student's name:  ");    //input the student's name
        scanf("%s",stu[i].name);
        for (j = 0; j < 3; j++) //each student includes 3 scores 
        {
            printf("score %d:",j+1);    //input three scores
            scanf("%d",&stu[i].score[j]);
        }   //end for
        printf("\n");
    }   //end for
}   //end input()
