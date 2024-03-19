 /*if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0))*
 Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/


 #include<stdio.h>
  int main()
  {

	int year;

	printf("Enter the year:\n");
	scanf("%d", &year);

/*

	if(year % 400 == 0)
		printf("%d is leap year.!\n", year);

	else if(year % 100 !=0)

		 printf("%d is not leap year.!\n", year);

	else if (year % 4 == 0)
		printf("%d is leap year.!\n", year);

	else
	printf("else %d is not leap year.!\n", year);

*/


/*
	if (((year % 4 == 0) && (year % 100!= 0)) || (year % 400 == 0))
		printf("year is leap.!\n");

	else 
		printf("year is not leap\n.!");
*/



	int num;

	num=((year%4==0)&&(year%100!=0))? printf("leap year\n") :
		(year%400==0)? printf("leap year\n") : printf("not  leap year\n");


  return 0;
 } 
