/*
Write a program to display day of week from given date (day, month and year).
*/


 #include<stdio.h>
  int main()
  {
	
	int week;

	printf("Enter the week (1 to 7):");
	scanf("%d", &week);

	switch(week)
	{

	case 1:
		printf("This is Monday.!\n");
		break;

	case 2:
		printf("This is Tuesday.!\n");
		break;

	case 3:
		printf("This is Wednesday.!\n");
		break;
	
	case 4:
		printf("This is Thursday.!\n");
		break;

	case 5:
		printf("This is Friday.!\n");
		break;

	case 6:
		printf("This is Saturday.!\n");
		break;

	case 7:
		printf("This is Sunday.!\n");
		break;

	default:
		printf(" Invalid Day\n");
		
	}

	return 0;
	}
