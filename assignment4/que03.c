/*
Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.
*/

#include<stdio.h>
float add (float, float);
float sub(float, float);
float mul(float, float);
float div (float, float);

  int main()
  {
	float num1, num2;
	float res;
	char opr;

	printf("Enter the num1 opr num2:");
	scanf("%f %c %f", &num1, &opr, &num2);
	
	switch(opr)
	{

	case '+':
		res= num1+num2;

			break;

	case '-':
		res= sub(num1, num2);

			break;

	case '*':
	    res= mul(num1, num2);

			break;

	case '/':
		res = div(num1, num2);

			break;
	default:
		printf("invalid case");

	}
		printf("%.2f %c %.2f = %.2f\n", num1, opr, num2, res);



  return 0;
  }

  float add(float num1, float num2)
  {
  	float ans;
 	ans=num1+num2;
  	return ans;
  }
	
 float sub(float num1, float num2)
 {
	float ans;
 	ans=num1-num2;
	return ans;
 }

 float mul(float num1, float num2)
 {

 	float ans;
	ans=num1*num2;
	return ans;
 }

 float div(float num1, float num2)
 {
	float ans;
 	ans= num1/ num2;
	return ans;
 }



