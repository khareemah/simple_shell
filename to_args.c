

#include <stdlib.h>
#include <string.h>

char **to_args(char *command)
{
	char *str = NULL;
	char **args = NULL;
	size_t max_args = 6;	
	size_t args_count = 0;
	char *delim = " ";

	args = malloc(sizeof(*args) * max_args);
	/*check if args == NULL */
	str = strtok(command, " ");

	while (str != NULL && args_count < max_args - 1)
	{
		args[args_count++] = str;
		str = strtok(NULL, delim);
	}
	args[args_count] = NULL;
	return (args);
}
