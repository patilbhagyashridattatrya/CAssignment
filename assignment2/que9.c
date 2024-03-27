 /*Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.
*/



 #include<stdio.h>
  int main()
  {
	int month;
	int year;

	printf("Enther the month:");
	scanf("%d",&month);

	printf("Enter the year:");
	scanf("%d", &year);

	
	if((year%4==0)&&(year%100!=0) || (year%400==0))

		printf("%d is leap year \n", year);

	else 
		printf("%d Not Leap Year\n", year);


	if (month==2)
		printf("number of days are :28\n");

	else if (month==1, month==3, month==5, month==7, month=8, month=10, month=12)
		printf("number of days are : 31\n");

	else if(month==2, month==4, month==6, month==9, month==11)
		printf("number of days are:30\n");

	else
		printf("invalid month\n");


	 return 0;
  }
