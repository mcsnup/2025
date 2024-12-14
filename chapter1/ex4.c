/*
 * Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
 
   print Celsius-Fahrenheit table
   for fahr = 0, 20, ..., 300; floating-point version
   °F = (°C × 9/5) + 32

*/

#include<stdio.h>

int main()
{
	double fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step =20;

	celsius = lower;
	printf("Celsius\t Fahrenheit\n");

	while (celsius <= upper)
	{
		fahr = (celsius * 9.0/5.0) + 32.0;
		printf("%.1f\t %.2f\n", celsius, fahr);

		celsius = celsius + step;
	}
	return 0;
}


