#include "pipex.h"

void	run1(char *argv[], int fd[], char **exec1)
{
	int		fd1;
	char	*path;
	char	**env;

	path = strconcat(exec1[0]);
	env = NULL;
	fd1 = open(argv[1], O_RDONLY);
	checkoutput(fd1);
	checkoutput(dup2(fd1, STDIN_FILENO));
	checkoutput(dup2(fd[1], STDOUT_FILENO));
	close(fd[0]);
	close(fd[1]);
	checkoutput(execve(path, exec1, env));
}