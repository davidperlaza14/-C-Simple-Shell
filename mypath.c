#include "main.h"

/**
 * mypath - My function
 * @list: Linked list
 * @environment: environment variable
 * Return: No line
 */

void mypath(list_t *list, char **environment)
{
	pid_t child;
	int status;

	child = fork();
	switch (child)
	{
		case 0:
			execve(list->array[0], list->array, environment);
			exit(98);
		case -1:
			perror("Error to create a child proccess");
			break;
		default:
			wait(&status);
			break;
	}
}
