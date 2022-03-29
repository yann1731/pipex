#include "pipex.h"

void	run1(char *argv[], int fd[], char **cmd1, char **pot_path)
{
	int	fd1;
	char *path;
	char **env;

	env = NULL;
	path = checkaccess(cmd1[0], pot_path);
	fd1 = open(argv[1], O_RDONLY);
	checkoutput(fd1);
	checkoutput(dup2(fd1, STDIN_FILENO));
	checkoutput(dup2(fd[1], STDOUT_FILENO));
	close(fd[0]);
	close(fd[1]);
	checkoutput(execve(path, cmd1, env));
}