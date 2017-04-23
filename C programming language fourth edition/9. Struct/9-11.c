//9-11
//now have linkedlist a and b, and node in it includes No. and score.
//delete all the nodes with the same data
#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct stu)

struct  stu	//define struct
{
	long num;
 	int score;
 	struct stu *next;
};
struct stu lista,listb;	//create two lists  

int main()
{
	int n,sum=0;
	struct stu *merge(void);	//declare function merge 
 	struct stu *insert(struct stu  *,struct stu *);	//declare function insert
 	void print(struct stu *);
 	struct stu *ahead,*bhead,*abh;
 	printf("input list a:\n");	//input list A
 	printf("press '0' to continue\n");	//end list A with 0 
 	ahead = merge();	//define ahead as the result of merge 
 	sum = sum + n;
 	printf("input list b:\n");	//input list B
 	bhead = merge();	//define bhead as the result of merge
 	sum = sum + n;
 	abh = insert(ahead,bhead);	//define abh as the result of insert of list A and B
 	print(abh);	//output the result 
 	return 0;
}	//end main

struct stu *merge(void)	//declare the linkedlist funtion 
{
 	struct stu *p1,*p2,*head;
  	n = 0;
  	p1 = p2 = (struct stu *)malloc(LEN);	//transfer pointer(malloc(len)) into the struct same as struct stu
  	printf("input scores of stu:\n");
  	scanf("%ld,%d",&p1->num,&p1->score);	//input the scores of students 
  	head=NULL;	//declare head is a null 
  	while(p1->num != 0)	//if scores does not equal to 0
    	{
		n = n + 1;	//continue input scores 
          	if (n == 1)	//define the head of pointer p1 
              		head = p1;
          	else	//if scores equal to 0(end)
       	     		p2 -> next = p1;
              		p2 = p1;
             		p1 = (struct stu *)malloc(LEN);	//transfer pointer(malloc(len)) into the struct same as struct stu
     		scanf("%ld,%d",&p1->num,&p1->score);
    	}	//end while
    	p2->next=NULL;
  	return(head);
}	//end stu*merge()
     
struct stu *insert(struct stu *ah,struct stu *bh)	//declare funtion of insert
 {
 	struct stu * pa1,* pa2,* pb1,* pb2;
  	pa2 = pa1 = ah;
  	pb2 = pb1 = bh;
 	while((pb1 -> num > pa1->num) && (pa1 -> next !=NULL))	//if pb1 small than pa1 and the next object in pa1 is not a null 
        {	
	 	   pa2 = pa1;	//change pa1 and pa2 
                   pa1 = pa1->next;	//sort next object of pa1
        }	//end while
    	if (pb1 -> num <= pa1->num)	
        {
	 	if (ah == pa1)	//if the value of pa1 equal to the head of linkedlist a
	        	ah = pb1;	//assigned the value of pb1 to the head of linkedlist a
        	else 	//if not 
			pa2 -> next = pb1;	//assigned the value of pb1 to the next node of pa2
	  		pb1 = pb1-> next;	//assigned the value of the next of pb1 to pb1
	  		pb2->next = pa1;	//assigned the value of pa1 to the next node of pb2 
      		pa2 = pb2;	//assigned the value of pb2 to pa2
	  		pb2 = pb1;	//assigned the value of pb1 to pb2
	 }	//end if 
	while ((pa1->next != NULL) || (pa1 == NULL && pb1 != NULL));
    		if ((pb1 != NULL) && (pb1 -> num > pa1 -> num) && (pa1 -> next == NULL))
      		pa1 -> next = pb1;
    	return(ah);
 }	//end stu*insert

void print(struct stu *head)  //declare funtion of output 
{
  	struct stu *p;
   	printf("%d records: \n",sum);
   	p = head;
   	if (p != NULL)
		while (p != NULL)
        	{
	   	    	printf("%ld %d\n",p->num,p->score);
	            	p = p->next;
        	}	//end if
}	//end print()