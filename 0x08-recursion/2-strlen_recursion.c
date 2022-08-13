#include "main.h"

/**
* _strlen_recursion -> function to get length of string
* @s: string param
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	static int count=0;
	if (*s == '\0')
	{
		return count;
	}
	count += 1;
	s++;
	_strlen_recursion(s);
}
