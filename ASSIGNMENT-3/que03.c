/*Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20

b. Reverse the number
Input: 9362
Output: 2639

c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome

d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number

*/
 #include<stdio.h>
  int main()
  {
	// Calculate sum of digits of integer

	int num, rem, sum=0, res;

	printf("Enter the number for sum of digit:");
	scanf("%d", &num);

	res=num;

	while(num!=0)
	{

	rem=num%10;
	sum=rem+sum;
	num=num/10;

	}
	
	printf("Sum of digit of number:9+3+6+2 = %d\n", sum);
	printf("\n----------------------------------------------------------\n");


	//Reverse the number
	
	int num1;
	int reverse=0, reminder;

	printf("Enter the number for reverse:");
	scanf("%d", &num);
	
	while(num!=0)
	{
		reminder=num%10;
		reverse= reverse*10+reminder;
		num/=10;
	}
	printf(" Reversed number=%d\n", reverse);
	printf("\n----------------------------------------------------------\n");



	//Check whether given number is numeric palindrome or not
	  
	int num2;
	int rev=0, i, remi;

	printf("Enter the number to check palindrome:");
	scanf("%d", &num2);
	
	i=num2;

	while(num2!=0)
	{
	rem=num2%10;
	rev*=10;
	rev+=rem;
	num2/=10;
	}

	if(i==rev)
		printf("%d is palindrome number\n", rev);

	else
		printf("%d is not palindrome number\n", rev);
	 printf("\n----------------------------------------------------------\n");



	//Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
	//then the number is called as Armstrong number)

		int num4; 
		int original, reemi, result;

		printf("Enter the number to check armstrong:");
		scanf("%d", &num4);

		original=num4;

		while(num4 !=0)
		{

			reemi= num4% 10;
			result+= reemi* reemi* reemi;
			num4/=10;
		}

		if(result==original)
			printf("%d number is armsrtong\n", original);
	
		else
			printf("%d number is not armstrong\n", original);
	  return 0;
  }
