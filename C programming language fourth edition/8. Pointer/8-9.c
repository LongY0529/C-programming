//8-9
//swap a 3*3 matrix 
#include <stdio.h>
int main()
{
    void swap(int *pointer);    //declare function swap
    int a[3][3],*p,i;   //define the size of the matrix
    printf("input matrix:\n");  //inpuit the matrix
    for (i = 0; i < 3; i++)
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    p = &a[0][0];   //define pointer p points to the head address of matrix 
    swap(p);    //run function p 
        printf("new matrix:\n");    //output the new matrix
    for (i = 0; i < 3; i++)
        printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
    return 0;
}   //end main()

void swap(int *pointer)
{
    int i,j,t;
    for (i = 0; i < 3; i++) //swap the matrix
         for (j = i; j < 3; j++)    
         {
             t = *(pointer+3*i + j);    //store the value the pointer points to in t
            *(pointer+3*i+j) = *(pointer+3*j+i);    //swap the value between two pointers
            *(pointer+3*j+i) = t;   //reutrn the value in t to pointer 
         }  //end for
}   //end swap()
