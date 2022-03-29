#include "pipex.h"

char	*checkaccess(char *cmd, char **path)
{
	char	*cmdpath;
	int		i;

	i = 0;
	cmdpath = ft_strjoin(path[i], "/");
	printf("cmdpath + /: %s\n", cmdpath);
	cmdpath = ft_strjoinfree(cmdpath, cmd);
	printf("cmdpath + cmd: %s\n", cmdpath);
	return (cmdpath);
}