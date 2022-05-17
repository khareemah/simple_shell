#include "main.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *args[] = {enter_command(), NULL};

	//args[0] = enter_command();

	if(execve(args[0], args, NULL) < 0)
	{
		perror("./hsh");
		//exit(EXIT_SUCCESS);
	}
	return (0);
}
