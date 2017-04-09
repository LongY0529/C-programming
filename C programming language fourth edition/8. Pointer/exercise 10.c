//8-10
//put the largerst element in the middle of the matrix
//put the smallest element in four corner(asecending order on both left to right and bottom to top)
#include <stdio.h>
int main()
{
    void swap(int *p);  //declare function swap
    int a[5][5],*p,i,j; //define the 5*5 matrix
    printf("input the matrix:\n");  //input the matrix
    for (i=0;i<5;i++)
        for (j=0;j<5;j++)
            scanf("%d",&a[i][j]);   //scan all the elements
    p=&a[0][0]; //pointer p points to the head address of the matrix
    swap(p);    //run function swap
    printf("new matrix is:\n"); //output the new matrix
    for (i=0;i<5;i++)
        for (j=0;j<5;j++)
            printf("%d ",a[i][j]);
    return 0;
}   //end main()

void swap(int *p) 
{
    int i,j,temp;
    int *pmax,*pmin;
    pmax=p;
    pmin=p;
    for (i=0;i<5;i++)   //search for the largest and the smallest element
        for (j=i;j<5;j++)
        {
            if (*pmax < *(p + 5*i + j)) 
                pmax = p + 5*i + j; //find the largest element, pointer pmax points to it
            if (*pmin > *(p + 5*i + j)) 
                pmin = p + 5*i + j; //find the smallest element, pointer pmin points to it
        }
    temp = *(p + 12);   //store the value of middle of the matrix in temp
    *(p + 12) = *pmax;  //swap the largest element with the middle element of the matrix
    *pmax = temp;   //swap the smallest element with the corner
    temp = *pmin; 
    *pmin = temp;   
    pmin = p+1; //start searching for the smallest element from a[0][1]
    for (i = 0; i < 5; i++) //find the second minor element
        for (j = 0; j < 5; j++)
	    {
            if(i == 0 && j == 0) 
                continue;
            if  (*pmin > *(p + 5*i + j))  
                pmin = p + 5*i + j; //find it 
	    }
    temp = *pmin;   //swap the second minor with the top right corner
    *pmin = *(p+4);
    *(p+4) = temp;
    pmin = p+1;
    for (i = 0; i < 5; i++) //find the third minor element
        for (j = 0; j < 5; j++)
	    {
            if((i == 0 && j == 0)||( i== 0 && j == 4)) 
                continue;
	        if(*pmin > *(p+5*i+j)) 
                pmin = p+5*i+j; //find it 
	    }
    temp = *pmin;   //swap the third minor element with the bottom right corner
    *pmin = *(p+20);
    *(p+20) = temp;
    pmin = p+1;
    for (i = 0; i < 5; i++) //find the fourth minor element
        for (j = 0; j < 5; j++)
	    {
            if ((i == 0 && j == 0)||(i == 0 && j == 4)||(i == 4 && j == 0)) 
                continue;
	        if (*pmin > *(p+5*i+j)) 
                pmin = p+5*i+j; //find it 
	    }
    temp = *pmin;   //swap the fourth minor element with the bottom left corner
    *pmin = *(p+24);
    *(p+24) = temp;
}   //end swap()