#include "pipex.h"

char	*checkaccess(char *cmd, char **path)
{
	char	*cmdpath;
	int		i;

	i = 0;
	while (path[i])
	{
		cmdpath = ft_strjoin(path[i], "/");
		cmdpath = ft_strjoin(cmdpath, cmd);
		if (access(cmdpath, F_OK) == 0)
			return (cmdpath);
		free(cmdpath);
		i++;
	}
	return (NULL);
}