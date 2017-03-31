//5-4
#include <stdio.h>
int main()
{
	char c;
	int letters=0,space=0,digit=0,other=0;
	printf("Please input a line of String:\n");
	while((c=getchar())!='\n')
	{
		if (c>='a' && c<='z' || c>='A' && c<='Z')
			letters++;
		else if (c==' ')
			space++;
		else if (c>='0' && c<='9')
			digit++;
		else
			other++;
	}
	printf("The number of alphabet:%d\nThe number of space:%d\nThe number of numbers:%d\nThe number of other characters:%d\n",letters,space,digit,other);
	return 0;
}
