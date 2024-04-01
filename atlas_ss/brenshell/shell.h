#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/wait.h>
	/**
	 * waitpid() and associated macros
	 */
#include <unistd.h>
	/**
	 * chdir()
	 * fork()
	 * exec()
	 * pid_t
	 */
#include <stdlib.h>
	/**
	 * malloc()
	 * realloc()
	 * free()
	 * exit()
	 * execvp()
	 * EXIT_SUCCESS, EXIT_FAILURE
	 */
#include <stdio.h>
	/**
	 * fprintf()
	 * printf()
	 * stderr
	 * getchar()
	 * perror()
	 */
#include <string.h>
	/**
	 * strcmp()
	 * strtok()
	 */

int main(int argc, char **argv);
void lsh_loop(void);
char *lsh_read_line(void);
char **lsh_split_line(char *line);
int lsh_launch(char **args);
int lsh_num_builtins(void);
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int lsh_execute(char **args);

#endif
