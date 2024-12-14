/*Exercise 1-3. Modify the temperature conversion program to print a heading above the table

 print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

#include <stdio.h>


int main()
{
	double celsius, fahr;
	int lower = 0;
	int upper = 300;
	int step = 20;

	fahr = lower;
	printf("Fahr\tCelsuis\n");

	while (fahr <= upper)
	{
		celsius = (fahr - 32) * 5/9;
		printf("%.0f\t %.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
