#include "pipex.h"

void	checkoutput(int output)
{
	if (output == -1)
	{
		perror("Error");
		exit(-1);
	}
}
