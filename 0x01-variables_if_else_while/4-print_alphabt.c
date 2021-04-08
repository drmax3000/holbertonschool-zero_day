#include <stdio.h>
#include <stdlib.h>
/**
  * main - function
  *
  *
  *Return: 0
  */
int main(void)
{
char d;
for (d = 'a'; d <= 'z'; d++)
{
if (d == 'q' || d == 'e')
{
d++;
}
putchar(d);
}
putchar('\n');
return (0);
}
