//9-12
//create a linkedlist including No, name, sex and age.
//input an age, if the linkedlist includes this age, delete it.
#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct  stu)
struct  stu //define struct
{   
    char num[10];
    char name[20];
    char sex[2];
    int age;
    struct stu *next;
} 
stu[10];

int main()  //define function of linkedlist
{ 
    struct stu *p,*pt,*head;    //define two pointer p(input) and pt(sort age) head as start of the linkedlist 
    int i,length,iage;
    int find; 
    printf("input the number of students:");    //input the length of students
    scanf("%d",&length);  
    for (i = 0; i < length; i++)    //define the linkedist
    {
	p = (struct stu *) malloc(LEN); //allocate space of struct stu and define the address to p
        if (i == 0) //define the head of linkedlist 
	    	head = pt = p;  //head of p 
        else
	    	pt -> next = p; //input data into linkedlist one by one 
            	pt = p;
     printf("NO.:"); //input  the No.
     scanf("%s",p->num);
     printf("name:");    //input the name 
     scanf("%s",p->name);
     printf("sex:"); //input the sex
     scanf("%s",p->sex);
     printf("age:"); //input the age 
     scanf("%d",&p->age);
     }   //end for
     p -> next = NULL;   //the next object is null 
     p = head;   //put head at the start of the linkedist and pointer p point to the start of the linkedlist 
     printf("\n NO.    name    sex  age\n"); //output the result 
     while(p != NULL)    //if the pointer not ends 
     {
	 printf("%4s%8s%6s%6d\n",p->num,p->name,p->sex,p->age);
         p = p->next;    //pointer point to next object 
     }   //end while 
     printf("input age:");   //input the agt you want to delete
     scanf("%d",&iage);
     pt = head;  //pointer pt point to the start of the linkedlist 
     p = pt; //pointer pt point to pointer p 
     if (pt -> age == iage)  //sort the object you want to delete
     {                      
	 p = pt->next;   //pointer point to next object 
     	 head = pt = p;  //define head as the new start of pointer p and pt 
     	 find = 1;   //return 1 
     }   //end if 
     else
       	 p = pt;
     	 pt=pt->next;
     	 find = 0;   //return 0 
     if (find == 0)  //input if we cant find the same age 
    	 printf("age not found.");
	 p = head;   //head as the start of the linkedlist 
  	 printf("\n NO.    name    sex  age\n"); //output the result
  	 while (p != NULL)   //if we find the same age 
         {
		printf("%4s%8s%6s%6d\n",p->num,p->name,p->sex,p->age);  //output the result 
    		p=p->next;
         }   //end while 
     return 0;
 }  //end main 
 
 
 
 

