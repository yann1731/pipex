#include "pipex.h"

void	execute(char *argv[], char **exec1, char **exec2, char **path)
{
	int pid1;
	int pid2;
	int fd[2];

	checkoutput(pipe(fd));
	pid1 = fork();
	checkoutput(pid1);
	if (pid1 == 0)
		run1(argv, fd, exec1, path);
	pid2 = fork();
	checkoutput(pid2);
	if (pid2 == 0)
		run2(argv, fd, exec2, path);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
}