/*
 ============================================================================
 Name        : Calendar.c
 Author      : kagaya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/* calender.c */
//finish
#include <stdio.h>
#include <stdlib.h>

#define JULIAN    1
#define GREGORIAN 2
#define TRUE    1
#define FALSE   0
int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int startingDay;

int inputyear()
{
	int year;

	printf("���N�J�����_�[  ");
	printf(" �N�����");
	while(1){
	scanf("%d", &year);
	if(year > 9999){
		printf("�N�́u1~9999�v�͈̔͂œ��͂��Ă�������");

	}else{
		printf("�N�����: %d�N\n",year);
		break;
	}
	}
	return year;
}

int get_week_day(int day, int month, int year, int mode) {
  int a, m, y;

  a = (14 - month) / 12; // 1
  y = year - a; // 0
  m = month + 12*a - 2; // 11

  if (mode == JULIAN) {
    return (5 + day + y + y/4 + (31*m)/12) % 7;
  }

  return (day + y + y/4 - y/100 + y/400 + (31*m)/12) % 7; // GREGORIAN
  //1-0+0+4
}


int determineleapyear(int year)
{
	if((year% 4 == FALSE && year%100 != FALSE) || (year%400 == FALSE))
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

int getmonths()
{
   int months;
   printf("�������:");
   while(1){
	   scanf("%d",&months);
	   if(months>13){
		   printf("�������:%d\n ���́u1~12�v�͈̔͂œ��͂��Ă�������",months);

	   }else{
		   printf("�������:%d\n",months);
		   break;
	   }
   }

 return months;
}

void calendar( int month,int startingDay,int year)
{
	for (int x = month; x <= month; ++x) {
	        const int daysInMonth = days_in_month[x];  /* set # of days */
	        int dayOfWeek, date;

	        printf("%d�N%d���̃J�����_�[\n", year,x);
	        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");         // days of week

	        for (dayOfWeek = 0; dayOfWeek < startingDay; ++dayOfWeek)
	            printf("     ");


	        for (date = 1; date <= daysInMonth; ++date) {
	            printf("%5d", date);

	            if (++dayOfWeek > 6) {
	                printf("\n");
	                dayOfWeek = 0;
	            }
	        } // for date

	        if (dayOfWeek != 0)
	            printf("\n");

	        startingDay = dayOfWeek;
	    } // for month

}

int main(void)
{
	    int year, month;

		year = inputyear();
		determineleapyear(year);
		month = getmonths();
		// GREGorian OR JULIAN
		startingDay = get_week_day(1, month, year,GREGORIAN );
		calendar( month,startingDay,year);

		printf("\n");


}
