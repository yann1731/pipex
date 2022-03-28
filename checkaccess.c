#include "pipex.h"

char	*checkaccess(char *cmd, char **path)
{
	char	*cmdpath;
	int		i;
	int		a;

	i = -1;
	while (path[++i])
	{
		cmdpath = ft_strjoin(path[i], "/");
		cmdpath = ft_strjoin(path[i],cmd);
		if (access(cmdpath, F_OK) == 0);
			return (cmdpath);
		free(cmdpath); 
	}
	return (NULL);
}