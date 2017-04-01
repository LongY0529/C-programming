//exercise 9-1
//count it is how many days of the year 
#include <stdio.h>
struct	//define struct 
{ 
   		int year;
     	int month;
     	int day;
}
   date;
   
   
int main()
{
 		int days;
  		printf("input year,month,day:");
  		scanf("%d,%d,%d",&date. year,&date.month,&date.day);
  		switch(date.month)	//list number of days in each month
        { 
  			case 1: days=date.day;    break;	//if the month is Jan
    		case 2: days=date.day+31; break;	//if the month is Fen
    		case 3: days=date.day+59; break;	//if the month is Mar
    		case 4: days=date.day+90; break;	//if the month is Apr
    		case 5: days=date.day+120; break;	//if the month is May
    		case 6: days=date.day+151; break;	//if the month is Jun
    		case 7: days=date.day+181; break;	//if the month is Jul
    		case 8: days=date.day+212; break;	//if the month is Aug
    		case 9: days=date.day+243; break;	//if the month is Sep
    		case 10: days=date.day+273; break;	//if the month is Oct
    		case 11: days=date.day+304; break;	//if the month is Nov
    		case 12: days=date.day+334; break;	//if the month is Dec
        }	//end switch()
  			if ((date.year %4== 0 && date.year % 100 != 0	//judge wether it is leap year
      			||date.year % 400 == 0) && date.month >=3)  
	       		days += 1;	//if it is leap year and the month is after Feb, days + 1
  			if (date.day == 1 )	//if it is the 1st day
      			printf("It is the 1st day of the year");
  			else if (date.day == 2)	//if it is the 2nd day
      			printf("it is the 2nd day of the year");
  			else if (date.day == 3)	//if it is the 3rd day
      			printf("it is the 3rd day of the year");
  			else	// any other days 
      			printf("%d/%d is the %dth day in %d.\n",date.month,date.day,days,date.year);
		 return 0;
}	//end main()
