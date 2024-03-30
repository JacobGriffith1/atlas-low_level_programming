#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

void read_command(char cmd[], char *par[])
{
	char line[1024];
	int count = 0, i = 0, j = 0;
	char *array[100], *pch;

	for (;;)	/* Read one line */
	{
		int c = fgetc(stdin);
		line[count++] = (char) c;

		if (c == '\n')
			break;
	}
	if (count == 1)
		return;
	pch = strtok(line, " \n");

	while (pch != NULL)	/* Parse the line into words */
	{
		array[i++] = strdup(pch);
		pch = strtok(NULL, " \n");
	}

	strcpy (cmd, array[0]);

	for (int j = 0; j < i; j++)
		par[j] = array[j];
	par[i] = NULL;	/* NULL-terminate the parameter list */
}
