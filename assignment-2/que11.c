 /*Write a program to accept a point in Cartesian co-ordinate system and
 decide the quadrant in which the point lies. Also check for special
 cases point lies on x axis, y axis, origin

*/
 #include<stdio.h>
  int main()
  {
	
	int x, y;

	printf("Enter the points:");
	scanf("%d %d", &x, &y);

	if (x>=0 && y>=0)
		printf("Entered points x=%d, y=%d lies in 1st quadrant\n", x, y);

	else if (x<=0 && y>=0)

		printf("Entered points x=%d, y=%d lies in 2nd quadrant\n", x, y);

	else if (x<=0 && y<=0)
		printf("Entered points x=%d, y=%d lies in 3rd quadrant\n", x, y);

	else if (x>=0 && y<=0)
		printf("Entered points x=%d, y=%d lies in 4th quadrant\n", x, y);
	
	else if (x==0 && y==0)
		printf("Entered points x=%d, y=%d lies at the origin\n", x, y);

	 return 0;
  }
