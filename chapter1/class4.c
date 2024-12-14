//he next program counts characters; it is similar to the copy program.

#include <stdio.h>

/* count characters in input, 1st version */
int main()
{
	int count = 0;
	while (getchar() != EOF)
	{
		++count;
	}
	printf("%d\n", count);
	return 0;
}
