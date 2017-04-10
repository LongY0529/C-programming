//10-10
//delete an emploee's data from 10-9
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emploee2	//define struct emploee
{char  name[10];
 int   salary;
}
data2[20];

int main()
 { 
 	FILE *fp;	//define file pointer fp
   	int i,j,n,flag;
   	char name[10];	//define length of name
   	if ((fp = fopen("emploee2","rb")) == NULL)	//if file emploee2 can not be opened
    {
		printf("error!\n");	//output error
      	exit(0);
    }	//end if
   	for (i = 0; fread(&data2[i],sizeof(struct emploee),1,fp) != 0; i++)	//if file can be opened 
      	printf(" %s%d",data2[i].name,data2[i].salary);	//output data from data2
   	fclose(fp);
   	n=i;
   	printf("input name deleted:\n");	//input the emploee you want to delete
   	scanf("%s",name);	//scan the name
   	for (flag = 1, i = 0; flag && i < n; i++)	//search all the name in the data
    {
		if (strcmp(name,data2[i].name)==0)	//if the name is not found
        {
			for (j = i; j < n - 1; j++)
            {
		   		strcpy(data2[j].name,data2[j+1].name);	//copy data 
	        	data2[j].salary=data2[j+1].salary;
           	}	//end for
	     	flag = 0;
    	}	//end if
    }	//end for
   	if(flag != 0)	//if the name is found
     	n = n - 1;	//the number of emploee - 1
   	else
     	printf("\ne!");	
   	printf("\nNow,The content of file:\n");
   	if((fp = fopen("emploee2","wb")) == NULL)
    {
		printf("can not open file\n");
      	exit(0);
    }	//end if
   	for (i = 0; i < n; i++)
      	fwrite(&data2[i],sizeof(struct emploee),1,fp);
   	fclose(fp);
   	fp=fopen("emploee2","r");
   	for (i = 0;fread(&data2[i],sizeof(struct emploee),1,fp) != 0; i++)
      	printf("\n%8s   %7d",data2[i].name,data2[i].salary);
   	printf("\n");
   	fclose(fp);
   	return 0;
 }	//end main()

