#include "pipex.h"

char	*findpath(char **environ)
{
	int	i;
	char *rstr;

	i = -1;
	while (rstr == NULL)
		rstr = ft_strstr(environ[++i], "PATH=");
	return (rstr + 5);
}