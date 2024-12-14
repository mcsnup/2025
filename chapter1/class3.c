/*
 *    read a character
while (charater is not end-of-file indicator)
output the character just read
read a character
      copy input to output; 1st version
*/

#include <stdio.h>

int main()
{
	int c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return 0;

}

