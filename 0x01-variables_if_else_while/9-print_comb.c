#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
       	int n;

       	for (n = 48; n < 58; n++)
 {
	 putchar(n);

	 if (n != 57)
 {
	 putchar(',');
	 putchar(' ');
	 2023/06/16; 18;22
		 Page 5 of 8

	 putchar(' ');
 }

 }
       	putchar('\n');
 return (0);
}
