#include "pipex.h"

int	ft_strlen(const char *s)
{
	int count;

	count = -1;
	while (s[count])
		++count;
	return (count);
}