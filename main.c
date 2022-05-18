#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *command = NULL;
	char **args = NULL;

	while(1)
	{
		command = enter_command();
		args = to_args(command);
		
		if(execve(args[0], args, NULL) < 0)
		{
			perror("./hsh");
		}		
	}
	return (0);
}
