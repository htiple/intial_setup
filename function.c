// C program for explaining function in c
// By Harihar Tiple
// Date : 02 Dec 2013

#include<stdio.h>
#include<stdlib.h>

#define SECONDS_IN_DAY (24*60*60)

int convertDays(int);

int main()
{
	int noOfDays;
	int seconds;
	printf("Enter number of days you want to convert into seconds\n");
	scanf("%d",&noOfDays);
	seconds = convertDays(noOfDays);
	printf("Days are converted into seconds.....\nTotal number of seconds in %d days are %d\n"\
		, noOfDays,seconds);	
	return EXIT_SUCCESS;
}

int convertDays(int noOfDays){
	
	return noOfDays * SECONDS_IN_DAY;
}
