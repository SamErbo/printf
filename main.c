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
	int rm = 3444;
	int r = -3334;
	int m = 0;

	x = _printf("char = %c, And String = %s\n", ch, animal);
	printf("Characters printed by _printf = %d\n\n", x);
	x = printf("Char = %c, And String = %s\n", ch, animal);
	printf("Characters printed by original printf = %d\n\n", x);
	x = _printf("Invalid Specifier --> Char = %x, And String = %x\n");
	printf("Characters printed by _printf = %d\n\n", x);
	x = _printf("Space character --> Char = %     c, And String = %     s\n", ch, animal);
	printf("Characters printed by _printf = %d\n\n", x);
	x = _printf("Double module --> Char = %%, And String = %%");
	printf("Characters printed by _printf = %d\n\n", x);
	printf("Char = %%, And String = %%\n");
	printf("Decimal %d %d\n", rm, r);
	printf("Integer %i %i\n", rm, r);
	printf("Zero %d in D ,%i in I \n", m, m);
	

	_printf("Decimal %d %d\n", rm, r);
	_printf("Integer %i %i\n", rm, r);
	_printf("Zero %d in D ,%i in I \n", m, m);
	
	return (0);
}
