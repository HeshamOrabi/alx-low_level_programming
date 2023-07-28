#include <stdio.h>

void p_f(void) __attribute__ ((constructor));

/**
 * p_f - prints before the main
 * function is executed
 */
void p_f(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

