/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
	int mark1;
	int mark2;
	int total;
	float avg;
	
	printf("Enter Mark 1 = ");
	scanf("%d", &mark1);
	printf("Enter Mark 2 = ");
	scanf("%d", &mark2);
	
	total=mark1+mark2;
	printf("Total Marks= %d\n", total);
	avg= (float)total/2;
	printf("Average = %.2f\n",avg );
   
   return 0;
}
