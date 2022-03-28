#include "pipex.h"

static char	**memerr(char **str)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		free(str[index]);
		index++;
	}
	free(str);
	return (NULL);
}

static size_t	wordcount(const char *s, char c)
{
	size_t	count;
	size_t	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			count++;
			trigger = 1;
		}
		if (*s == c && trigger == 1)
			trigger = 0;
		s++;
	}
	return (count);
}

static size_t	nextword(const char *s, char c, size_t *i)
{
	size_t	count;
	size_t	index;

	count = 0;
	index = *i;
	while (s[index] == c)
		index++;
	while (s[index])
	{
		if (s[index] != c)
		{
			count++;
			index++;
		}
		if (s[index] == c)
		{
			*i = index;
			return ((count + 1));
		}
	}
	*i = index;
	return (count + 1);
}

char	**strsplit(const char *s, char c)
{
	char	**str;
	size_t	wc;
	size_t	index;
	size_t	i;
	size_t	size;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	wc = wordcount(s, c);
	str = malloc((wc + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (i < wc)
	{
		size = nextword(s, c, &index);
		str[i] = substr(s, (index - (size - 1)), (size - 1));
		if (str[i] == NULL)
			return (memerr(str));
		i++;
	}
	str[i] = NULL;
	return (str);
}