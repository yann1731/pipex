#include "pipex.h"

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int k;
	int nlen;
	int slen;

	nlen = 0;
	slen = 0;
	k = 0;

	while (to_find[nlen])
		nlen++;
	if (nlen == 0)
		return (str);
	while (str[k])
	{
		i = 0;
		while (str[i + k] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (&str[k]);
		}
		k++;
	}
	return (NULL);	
}