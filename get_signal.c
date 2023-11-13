#include "shell.h"

/**
 * get_signal - Handle the crtl + c call in prompt
 * @sig: Signal handler
 */
void get_signal(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}

