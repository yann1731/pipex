#include "pipex.h"

// open, close, read, write, malloc, free, perror
// strerror, access, dup, dup2, execve, exit, 
// fork, pipe, unlink, wait, waitpid

// Infile needs to be redirected to stdin
// Stdout needs to be redirected to outfile

int main(int argc, char *argv[])
{
	extern char		**environ;
	char			**exec1;
	char			**exec2;
	char			**path;

	path = strsplit(findpath(environ), ':');
	exec1 = strsplit(argv[2], ' ');
	exec2 = strsplit(argv[3], ' ');
	execute(argv, exec1, exec2, path);
}