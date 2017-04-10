//10-8
//insert a node into a dynamic chain
#include <stdio.h>
struct stu	//define struct 
{
	long num;
 	float score;
 	struct stu*next;
};    
int n;   
  
struct stu *insert(struct stu *head,struct stu *stud)
{
	struct stu *p0,*p1,*p2;
 	p1 = head;	//pointer p1 points	to the first node 
 	p0 = stud; 	//pointer p0 points to the insert node 
 	if(head == NULL)	//if the first value of chain is null	  	            
    	{
    		head = p0;	//set p0 as head
		p0 -> next = NULL;	//assign the next value of p0 as p0
	}//end if       
 	else	//if the first value of chain is not null
    	{
		while((p0->num > p1->num) && (p1-> next != NULL))	//if the value p0 points to > the value p1 points to and the next value of p1 is not null	
    		{
	    	p2 = p1;	//p2 point to p1 
           	p1 = p1->next;	//assign the next value of p1 to p1
    		}
	}//end while                    
    	if(p0-> num <= p1->num)	//if the value p0 points to <= the value p1 points to 
        {
	  	if(head == p1)	//if the first value of chain = p1 
			head = p0;	//insert in first node 
            	else	//if the first value of chain is not equal to p1
			p2->next = p0;	            
                 	p0->next = p1;
	}//end if
	 }
    n=n+1;	
    return (head);
}//end stu*insert()

