#include "pipex.h"

static int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	cd;

	cd = 0;
	if (dstsize == 0)
	{
		while (src[cd])
			cd++;
		return (cd);
	}
	cd = 0;
	while (cd < dstsize - 1 && src[cd])
	{
		dst[cd] = src[cd];
		cd++;
	}
	if (dstsize != 0)
		dst[cd] = '\0';
	cd = 0;
	while (src[cd])
		cd++;
	return (cd);
}

static int	ft_strlcat(char *dst, const char *src, int dstsize)
{
	int	start;
	int	count;

	start = ft_strlen(dst);
	count = 0;
	if (start + 1 > dstsize)
		return (ft_strlen(src) + dstsize);
	while (*src && start < (dstsize - 1))
	{
		dst[start] = *src;
		src++;
		start++;
	}
	dst[start] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

static int	total_str_len(char const *s1, char const *s2)
{
	int	total_len;

	total_len = 0;
	total_len += ft_strlen(s1);
	total_len += ft_strlen(s2);
	return (total_len);
}

char	*ft_strjoinfree(char const *s1, char const *s2)
{
	char	*ns;
	int		start;
	int		i;
	int		k;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	start = ft_strlen(s1);
	i = 0;
	k = 0;
	ns = malloc((total_str_len(s1, s2) + 1 * sizeof(char)));
	if (ns == NULL)
		return (NULL);
	ft_strlcpy(ns, s1, total_str_len(s1, s2) + 1);
	ft_strlcat(ns, s2, total_str_len(s1, s2) + 1);
	free((void *)s1);
	return (ns);
}