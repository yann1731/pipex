#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stdio.h>

// open, close, read, write, malloc, free, perror
// strerror, access, dup, dup2, execve, exit, 
// fork, pipe, unlink, wait, waitpid

void	checkargs(char *argv[], int argc);
void	checkoutput(int output);
void	execute(char *argv[], char **exec1, char **exec2, char **env);
char	*substr(const char *s, unsigned int start, size_t len);
char	**strsplit(const char *s, char c);
char	*strconcat(char *fct);
void	run1(char *argv[], int fd[], char **exec1);
void	run2(char *argv[], int fd[], char **exec2);
int		ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*findpath(char **environ);
char	*ft_strstr(char *str, char *to_find);