/*In above program, division may fail if denominator is zero. Use global variable as an error flag to
avoid this problem.
*/
#include<stdio.h>
int flag=0;

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
		if (flag)
		{
		printf("denominator is zero..\n");
		return 1;
		}
		break;
	default:
		printf("invalid case");

	}
		printf("Result:%.2f %c %.2f = %.2f\n", num1, opr, num2, res);



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
 
 	if(num2!=0)
	{
	float ans=1;
 	ans= num1/ num2;
	return ans;
	}
	else 
	{
		flag=1;
		return 0;
	}
 }



