#include "pipex.h"

void	run2(char *argv[], int fd[], char **exec2)
{
	int		fd1;
	char	*path;
	char	**env;

	path = strconcat(exec2[0]);
	env = NULL;
	fd1 = open(argv[4], O_WRONLY);
	checkoutput(dup2(fd1, STDOUT_FILENO));
	checkoutput(dup2(fd[0], STDIN_FILENO));
	close(fd1);
	close(fd[1]);
	close(fd[0]);
	checkoutput(execve(path, exec2, env));
}