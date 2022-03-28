#include "pipex.h"

// open, close, read, write, malloc, free, perror
// strerror, access, dup, dup2, execve, exit, 
// fork, pipe, unlink, wait, waitpid

// Infile needs to be redirected to stdin
// Stdout needs to be redirected to outfile

int main(int argc, char *argv[])
{
	char			**exec1;
	char			**exec2;
	extern	char	**environ;
	char			**env;


	env = strsplit(findpath(environ), ':');
	exec1 = strsplit(argv[2], ' ');
	exec2 = strsplit(argv[3], ' ');
	int i;

	i = -1;
	while (env[++i])
		printf("%s\n", env[i]);
	//execute(argv, exec1, exec2, env);
}