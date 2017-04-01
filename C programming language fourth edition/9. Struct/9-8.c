//9-8
//declare function to insert a node into linkedlist
#include <stdio.h>
struct student
{
	long num;
 	float score;
 	struct student*next;
};    
int n;   
  
struct student *insert(struct student *head,struct student *stud)
{
	struct student *p0,*p1,*p2;
 	p1 = head;	//point p1 to first node 
 	p0 = stud;	//point to the node needs to be inserted
 	if(head == NULL)	//if the likedlist is a null
    {
   	   head = p0;	//define point p0 point to the first node 
	   p0 -> next = NULL;
	}	//end if 
    else
    {
	   while((p0 -> num > p1 -> num) && (p1 -> next != NULL))
       {
	        p2=p1;	//point p2 to pointer p1
            p1=p1->next;	//p1 back for one node 
       }	//end while
            if(p0 -> num <= p1->num)
            {
	        	if(head == p1)	//insert at the front of the initial node 
				   head = p0;         
                else 
	        	   p2 -> next = p0;	//insert at the node pointer2 points at
            	   p0 -> next = p1;
	       }	//end if
           else
	       {
		        p1 -> next = p0;	//insert at the front of the last node
	            p0 -> next = NULL;
           }	//end else
   }
    n = n + 1;	//the number of node + 1                        
    return (head);
}	//end student* insert()

