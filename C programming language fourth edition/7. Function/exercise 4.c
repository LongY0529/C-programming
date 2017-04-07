//7-4
//declare a function of change line in a 3*3 array 
#include <stdio.h>

int main()
{ 
    int array[3][3];    //define the 3*3 array 
    void swap(int array[3][3]); //declare function of swap
    int i,j;
    printf("input array:\n");   //input the array 
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d",&array[i][j]);   //scan all the integer
    printf("the array is:\n");
    swap(array);    //run function of swap
    printf("new array is:\n");  //output the new array
    for (i = 0; i < 3; i++) 
        for (j = 0; j < 3; j++)
            printf("%5d",array[i][j]);
return 0;
}   //end main()

void swap(int array[][3])   
{
    int i,j,t;
    for (i = 0; i < 3; i++) //swap the array 
        for (j = i + 1; j < 3; j++)
        {
            t=array[i][j];  //store array[i][j] in t
            array[i][j] = array[j][i];  //change array[j][i] with array[i][j]
            array[j][i] = t;    //return t to array[j][i]
        }   //end for
}   //end swap()
