#include "pipex.h"

char	*strconcat(char *fct)
{
	char	*bin;
	int		len;
	char	*rstr;
	int		i;
	int		j;

	bin = "/";
	len = ft_strlen(bin);
	len += ft_strlen(fct);
	rstr = malloc((len + 1) * sizeof(char));
	i = -1;
	j = -1;
	while (bin[++i])
		rstr[i] = bin[i];
	while (fct[++j])
		rstr[i++] = fct[j];
	rstr[i] = '\0';
	return (rstr);
}