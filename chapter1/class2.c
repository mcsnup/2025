//temperature conversion using for loop

#include <stdio.h>

int main()
{
	double fahr;
	printf("Fahr\t Celsius\n");
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%.0f\t %.2f\n", fahr, (5.0/9.0) * (fahr - 32));
	return 0;
}
