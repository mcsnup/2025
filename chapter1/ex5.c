/*   
 *    Fahrenheit to Celsius table.
 *    Exercise 1-5. Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0
*/

#include <stdio.h>
int main()
{
	double fahr;
	printf("Fahr\t Celsius\n");

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%.0f\t %.2f\n", fahr, (fahr - 32)* (5.0/9.0));
	return 0;
}

