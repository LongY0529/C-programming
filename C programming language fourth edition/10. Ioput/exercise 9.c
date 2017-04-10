//10-9
//input all the data of emploee including No, name , sex, age, address, salary, health and diploma.
//sort all the name and salary of emploee and s 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emploee1	//define struct of all the data of emploee
{
	char    No[6];
 	char    name[10];
 	char    sex[2];
 	int     age;
 	char    addr[100];
 	int     salary;
 	char    health[8];
 	char    diploma[20];
 }
data1[10];

 struct emploee2	//define struct of name and salary of emploee	
 {
	char name[10];
  	int  salary;
 }
 data2[10];

int main()
{
	FILE *fp1,*fp2;	//define file pointer fp1 and fp2
  	int i,j;
  	if ((fp1=fopen("emploee1","r"))==NULL)	//if file emploee1 can not be opened
   	{
	   	printf("error!\n");	//output error
    		exit(0);
   	}	//end if
  	printf("\n  NO.   name  sex   age    addr   salary   health  diploma\n");	//if file can be opened, input all the data
  	for (i = 0; fread(&data1[i],sizeof(struct emploee), 1 , fp1) !=0 ; i++)	//output all the data in data1
    	{
		printf("\n%s%s%s%d%s%d%s%s",data1[i].No,data1[i].name,data1[i].sex,
	     		data1[i].age,data1[i].addr,data1[i].salary,data1[i].health,data1[i].diploma);
     		strcpy(data2[i].name,data1[i].name);	//copy data from data1 to data2
     	data2[i].salary = data1[i].salary;
    	}	//end for
   	printf("\n\n");	//change line
   	if((fp2 = fopen("emploee2","wb"))==NULL)	//if file emploee2 can not be opened
    	{
		printf("error!\n");	//output error
      		exit(0);
    	}	//end if
   	for (j = 0; j < i; j++)	//if file can be opened
    	{
		if(fwrite(&data2[j],sizeof(struct emp),1,fp2) != 1)	//write in all the data copy from data1
	    	printf("error!");
      	printf("\n %s%d",data2[j].name,data2[j].salary);
    	}	//end for
   	fclose(fp1);	//close pointer fp1
   	fclose(fp2);	//close pointer fp2
   	return 0;
}	//end main()

