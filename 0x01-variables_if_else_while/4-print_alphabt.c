#include <stdio.h>
/**
 * * main - Print the alphabet in lowercase letters, except for e and q
 * Return: Always 0 (Success)
 */
int main(void)

{

char letter;

for (l = 'a'; l <= 'z'; l++)
{
	if
		(l != 'e' && l != 'q')
			putchar(1);
}
putchar('\n');
return (0);
}
