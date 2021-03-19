#include <stdio.h>

/**
 * before_main_exec- funtion that prints before the main function is executed
 *
 * Return: void return
 */

void __attribute__((constructor)) before_main_exec()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
