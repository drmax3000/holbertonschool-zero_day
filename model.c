#include "holberton.h"

/**
 * find_command - finds--> command--> execute--> in path routes.
 *
 * @command: first--> position--> getline input.
 *
 * Return: string --> folder for command--> be executed.
 **/
char *find_command(char *command)
{
	DIR *folder;
	struct dirent *entry;
	char *cmd, comp, **str  = malloc(sizeof(char) * 1024);
	char **split = malloc(sizeof(char) * 1024), **split2;
	int i;

	if (split == NULL || str == NULL)
		return (NULL);

	while (*environ != NULL)
	{
		if (!(_strcmpdir(*environ, "PATH")))
		{
			*str = *environ;
			for (i = 0; i < 9; i++, split++, str++)
			{
				*split = strtok(*str, ":='PATH'");
				folder = opendir(*split);
				if (folder == NULL)
				{
					perror("Unable to read directory");
				}
				while ((entry = readdir(folder)))
				{
					cmd = entry->d_name;
					comp = _strcmpdir(cmd, command);
					if (comp == 0)
					{
						split2 = split;
						free(str);
						free(split);
						return (*split2);
					}
					if (cmd == NULL)
					{
						perror("Error");
					}}}}
		environ++;
	}

	free(str);
	free(split);
	return ("Error: Not Found");
}
