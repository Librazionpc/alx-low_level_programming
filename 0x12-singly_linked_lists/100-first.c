#include <stdio.h>

/**
 * callBeforeMain - Function that print before main
 *
 * Return: Nothing
 */

void callBeforeMain() __attribute__((constructor));

void callBeforeMain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

