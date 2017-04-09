//8-14
//input n numbers, inverse the string
#include <stdio.h>
int main()
{
    void sort (char *p,int m);  //declare function sort
    int i,n;
    char *p,str[20];    //declare the max number input(20)
    printf("input a integer blow 20:"); //input number n(number of the input) 
    scanf("%d",&n);
    printf("input numbers:\n");    //input n numbers
    for (i = 0; i < n; i++)
        scanf("%d",&str[i]);
    p=&str[0];  //pointer p points to the head address of number
    sort(p,n);  //run function sort
    printf("new order is:\n");  //output the sorted number
    for (i=0;i<n;i++)
        printf("%d ",str[i]);
    return 0;
}   //end main()

void sort (char *p,int m) 
{
    int i;
    char p, *p1,*p2;    //define two pointer
    for (i = 0; i < m / 2; i++) //sort till the middle of the str
    {
        p1 = p + i; //the first pointer starts from the head of the str
        p2 = p + (m - 1 - i);   //the second pointer starts from the middle of the str
        p = *p1;    //store the value of p1 in p
        *p1 = *p2;  //swap p2 and p1
        *p2 = p;    //put the value of p in p2
    }   //end for 
 }  //end sort()