#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/** *main-Prints a random number and states whether it is possitive, negative or zero.*
 * Return: Always 0. */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
