#include "pipex.h"

char	*checkaccess(char *cmd, char **path)
{
	char	*cmdpath;
	int		i;
	int		a;

	i = 0;
	cmdpath = ft_strjoin(path[i], "/");
	cmdpath = ft_strjoinfree(cmdpath, cmd);
	return (NULL);
}