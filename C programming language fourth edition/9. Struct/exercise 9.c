//9-9
//create a function including input, delete, insert and output.
#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct student)
struct student  //define function
{
    long num;
    float score;     
    struct student *next;
};
int n; 

int main()
{
    struct student *input();    //declare function input
    void output(struct student *);  //declare function output
    struct student *delete(struct student *);  //declare function delete	
    struct student *insert(struct student *, struct student *); //declare function insert
    struct student *head,*stu;
    printf("input data:\n");    //input data
    head=input();   //run function input, assign the value to head
    output (head); 
    printf("input a number:");  //input the number you want to delete
    scanf("%ld",&del);
    printf("\ninput another number:");  //input the number you want to insert
    stu= (struct student *) malloc(LEN); //assign memory to struct
    scanf("%ld,%f", &stu->num, &stu->score);
    return 0;
}   //end main()
	 
struct student *input()
{
    struct student *head;
    struct student *p1,*p2;
    n=0;
    p1=p2=( struct student*) malloc(LEN);   //pointer p1 and p2 points to the address stored struct
    scanf("%ld,%f",&p1->num,&p1->score);    //p1 points to num, p2 points to score
    head = NULL;
    while(p1->num != 0) //if the num p1 points to do not equal to 0
    {
        n=n+1;  //the numebr + 1
	if(n == 1)  //when n = 1  
            head = p1;  //define p1 as the head address 
	else    //when != 1
            p2->next=p1;    //assign p1 to the next node of p1
	    p1=(struct student*)malloc(LEN);    //p1 points to the addresss stored struct
	    scanf("%ld,%f",&p1->num,&p1->score);
    }   //end while
    p2->next = NULL;
    return(head);
}   //end input()

struct student *delete(struct student *head,long num)
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
}   //end student


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
}	//end insert()

void output(struct student *head)
{
    struct student *p;
    printf("new data is:\n",n); //output the new data  
    p=head; //pointer p points to the head address of data
    if(head != NULL)    //if the value of head is not null
	 do
	 {
               printf("%ld %5.1f\n",p->num,p->score);   //print the data
	       p=p->next;   //p points to the next node
	 }
       	 while(p != NULL);    //till the value p points to is null
}   //end output
