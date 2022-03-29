#include "pipex.h"

void	run2(char *argv[], int fd[], char **cmd2, char **pot_path)
{
	printf("pid for child 2 after run call: %d\n", getpid());
	int		fd1;
	char	*path;
	char	**env;

	env = NULL;
	path = checkaccess(cmd2[0], pot_path);
	if (path == NULL)
	{
		printf("fuck\n");
		exit (-1);
	}
	fd1 = open(argv[4], O_WRONLY);
	checkoutput(dup2(fd1, STDOUT_FILENO));
	checkoutput(dup2(fd[0], STDIN_FILENO));
	close(fd1);
	close(fd[1]);
	close(fd[0]);
	//checkoutput(execve(path, cmd2, env));
}