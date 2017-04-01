//9-2
//count it is how many days of the year(Define a function to output the result)
#include <stdio.h>
struct ymd	//define struct
{
	 	int year;
     	int month;
     	int day;
}	//end struct
date;

int main()	//output the days 
{ 
		int days(int year,int month,int day);	//declare function of days
  		int sumdays;
  		printf("input year,month,day:")	;//input the date(eg:2016.05.29)
  		scanf("%d,%d,%d",&date. year,&date.month,&date.day);
  		sumdays=days(date.year,date.month,date.day);
  		if (date.day == 1 )	//if it is the 1st day
      		printf("It is the 1st day of the year");
  		else if (date.day == 2)	//if it  is the 2nd day
      		printf("it is the 2nd day of the year");
  		else if (date.day == 3)	//if it is the 3rd day
      		printf("it is the 3rd day of the year");
  		else	// any other days 
            printf("%d / %d is the %dth day in %d.\n",date.month,date.day,sumdays,date.year);
		return 0;
}	//end main()

int days(int year,int month,int day)
{
		int sumdays,i;
 		int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};	//list of the days(from Jan to Dec) 
 		sumdays=0;
 		for (i = 1; i < month; i++)	//sum days 
   			 sumdays += days[i];
 			 sumdays += day;
 		if ((year % 4 == 0 && year % 100 !=0 || year % 4 == 0) && month >= 3)	//judge whether it is leap year 
     		 sumdays+=1	;	//if it is leap year and month is after Feb, days + 1 
		return(sumdays);
}	//end days()


