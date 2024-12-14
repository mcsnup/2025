#include<stdio.h>

int main()
{
	printf("Hello, World\c");

/*  error mssg recieved on compiling:- 
        ex1.c: In function 'main':
ex1.c:5:32: warning: unknown escape sequence: '\c'
    5 |         printf("Hello, World\c");
*/
	
        //THE LINE OF CODE BELOW IS INTENDED TO PRINT THE MSSG ON SCREEN
/*
	const char mssg[] = "it time to beginning programming in full";
	puts(mssg);
*/
	return 0;
}
