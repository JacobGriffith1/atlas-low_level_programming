#include "shell.h"

/* Function Declarations */

int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

/* List of builtins and their corresponding functions */
char *builtin_str[] = {"cd", "help", "exit"};
int (*builtin_func[]) (char **) = {&lsh_cd, &lsh_help, &lsh_exit};

/**
 * lsh_num_builtins - Checks and returns the number of builtin functions.
 * Return: Number of builtins.
 */

int lsh_num_builtins(void)
{
	return (sizeof(builtin_str) / sizeof(char *));
}

/* Builtin function implementation */

/**
 * lsh_cd - Builtin function to change directory within the shell.
 * @args: Arguments
 * Return: 1
 */

int lsh_cd(char **args)
{
	if (args[1] == NULL)
		fprintf(stderr, "lsh: expected argument to \"cd\"\n");
	else
		if (chdir(args[1]) != 0)
			perror("lsh");
	return (1);
}

/**
 * lsh_help - Lists the names of builtin functions. A function to help
 * a prospective user of the shell.
 * @args: Arguments
 * Return: 1
 */

int lsh_help(char **args)
{
	int i;

	printf("Shell in the style of Stephan Brennan\n");
	printf("Type program names and arguments, and hit enter.\n");
	printf("The following are built in:\n");

	for (i = 0; i < lsh_num_builtins(); i++)
		printf(" %s\n", builtin_str[i]);

	printf("Use the man command for information on other programs.\n");
	return (1);
}

/**
 * lsh_exit - Exits the shell
 * @args: Arguments
 * Return: 0
 */

int lsh_exit(char **args)
{
	return (0);
}
