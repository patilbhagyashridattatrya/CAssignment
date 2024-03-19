 /*Write a program to display number of days in the given month and year using switch case
statement.*/

 #include<stdio.h>
  int main()
  {
	
	int month;
	int days;

	printf("Enter the month:");
	scanf("%d", &month);
//	printf("month=%d\n");


	switch(month)
	{

	case 1: 
		days=31;
		printf("number of days in %dst month is %d days\n", month, days);
		break;	

	case 2:
		days=28;
		printf("number of days in %dnd month is %d days\n",month, days);
		break;
		
	case 3:
		days=31;
		printf("number of days in %drd month is %d days\n", month, days);
		break;
		
	case 4: 
		days=30;
		printf("number of days in %dth month is %d days\n", month, days);
		break;
		
	case 5:
		days=31;
		printf("number of days in %dth month is %d days\n", month, days);
		break;

	case 6:
		days=30;
		printf("number of days in %dth month is %d days\n", month, days);
		break;

	case 7: 
		days=31;
		printf("number of days in %dth month is %d days\n", month, days);
		break;

	case 8:
		days=31;
		printf("number of days in %dth month is %d days\n", month, days);
		break;

	case 9: 
		days=30;
		printf("number of days in %dth month is %d days\n", month, days);
		break;

	case 10:
		days=31;
		printf("number of days in %dth month is %d days\n", month, days);
		break;

	case 11:
		days=30;
		printf("number of days in %dth month is %d days\n", month, days);
		break;

	case 12:
		days=31;
		printf("number of days in %dth month is %d days\n", month, days);
		break;

	default:
		printf("invalid month\n");

}
  return 0;
  }
