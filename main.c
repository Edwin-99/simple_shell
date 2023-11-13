#include "shell.h"

/**
 * free_data - frees data structure
 *
 * @datash: data structure
 * Return: void
 */
void free_data(data_shell *datash)
{
	unsigned int i;

	for (i = 0; datash->_environ[i]; i++)
	{
		free(datash->_environ[i]);
	}

	free(datash->_environ);
	free(datash->pid);
}

/**
 * init_data - Initialize data structure
 *
 * @datash: data structure
 * @av: argument vector
 * Return: void
 */
void init_data(data_shell *datash, char **av)
{
	unsigned int i;

	datash->argv = av;
	datash->input = NULL;
	datash->args = NULL;
	datash->status = 0;
	datash->counter = 1;

	for (i = 0; environ[i]; i++)
		;

	datash->_environ = malloc(sizeof(char *) * (i + 1));

	for (i = 0; environ[i]; i++)
	{
		datash->_environ[i] = _strdup(environ[i]);
	}

	datash->_environ[i] = NULL;
	datash->pid = _itoa(getpid());
}

/**
 * main - program entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	data_shell datash;

	signal(SIGINT, get_signal);
	init_data(&datash, argv);
	shell_loop(&datash);
	free_data(&datash);
	if (datash.status < 0)
		return (255);
	return (datash.status);
}

