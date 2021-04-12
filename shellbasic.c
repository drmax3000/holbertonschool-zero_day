#include "holberton.h"

/**
 * main - func with---> infinite loop
 * @ac: No--> use
 * @av: No--> use
 * Return: loop.
 * Description: keep the shell running.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
