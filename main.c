#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'Z';
	char *animal = "Cats And Dogs";
	int x;
	
	x = _printf("char = %c, And String = %s\n", ch, animal);
	printf("Characters printed by _printf = %d\n\n", x);
	printf("Char = %c, And String = %s\n", ch, animal);
	x = _printf("Invalid Specifier --> Char = %x, And String = %x\n");
	printf("Characters printed by _printf = %d\n\n", x);
	x = _printf("Space character --> Char = %     c, And String = %     s\n", ch, animal);
	printf("Characters printed by _printf = %d\n\n", x);
	x = _printf("Double module --> Char = %%, And String = %%");
	printf("Characters printed by _printf = %d\n\n", x);
	printf("Char = %%, And String = %%\n");
	return (0);
}
