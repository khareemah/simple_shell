#include <stdio.h>
#include <unistd.h>

char *enter_command(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	size_t n_bytes = 0;

	write(1, "c_is_fun: ", 11);
	n_bytes = getline(&buffer, &buffer_size, stdin);
	buffer[n_bytes - 1] = '\0';

	return (buffer);
}
