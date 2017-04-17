//4-8
//input scores and output these scores with A(100-90), B(80-89), C(70-79), D(69-60) and E(0-59)
#include <stdio.h>
int main()
  { 
	int i;
    char n;
    printf("input the score:");	//input the score
    scanf("%f",&i);
    while ( i > 100 || i < 0)	//if i is not in the range of 0-100
	{
		printf("error!");	//output error
	}
	if (i > 90)	//if i is in th erange of 0-100 and i > 90
	{
		
		n = 'A';
		printf("the grade is %c\n", n);	//output A
	}
	else if (i >= 80)	//if i in range 80-89
	{	
		n = 'B';
		printf("the grade is %c\n", n);	//output B
	}
	else if (i >= 70)	//if i in range 70-79
	{
		n = 'C';
		printf("the grade is %c\n", n);	//output C
	}
	else if (i >= 60)	//if i in range 60-69
	{
		n = 'D';
		printf("the grade is %c\n", n);	//output D
	}
	else	//if i < 60
		n = 'E';
		printf("the grade is %c\n", n);	//output E
	return 0;
}	//end main()
