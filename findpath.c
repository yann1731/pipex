#include "pipex.h"

char	*findpath(char **environ)
{
	int	i;
	char *ptr;

	i = -1;
	while (environ[++i])
	{
		ptr = ft_strstr(environ[i], "PATH=");
		if (ptr != NULL)
			return (ptr + 5);
	}
	return (NULL);
}