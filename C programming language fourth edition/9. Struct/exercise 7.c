//9-7
//delete a certain node in dynamic chain
#include <stdio.h>
struct student	//define struct 
{
	long num;
 	float score;
 	struct student *next;
};    
int n;

struct student *del(struct student *head,long num)
{
 	struct student *p1,*p2;
  	if (head == NULL)	//if the head address of chain is null
    	{
		printf("error!\n");	//output error
      		return(head);
    	}	//end if 
  	p1=head;	//p1 point to the first node
  	while (num != p1->num && p1->next != NULL)	//if the ndoe of p1 is not the node we want 
	}
		p2 = p1;	//assign p1 to p2
		p1 = p1->next;	//assian the next node of p1 to p1
	} //end while               
  	if (num == p1->num) //if the next value of p1 is the node we want                    
    	{	
		if(p1 == head)	//if the value of head address equal to p1
		   	head = p1->next;	//define head as the second node 
	    	else 
		   	p2->next = p1->next; 	//if not, assign next node of p1 as next node of p2 
	    	n = n - 1;	//the number of node - 1
    	}//end if 
    	else printf("%ld not been found!\n",num);	//cant find the node  
    	return(head);
}//end student
