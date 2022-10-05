#include "main.h"

/**
* _puts -> this is a function that puts
* @str: a param to _puts function
*/
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
