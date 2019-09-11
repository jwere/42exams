#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (1 + ft_strlen(str + 1));
}

void    ft_copy(char **dst, char *src, int i)
{
    (*dst)[i] = *src;
    if (!*src)
        return ;
    return ft_copy(dst, src + 1, i + 1);
}

char *ft_strdup(char *str)
{
    char *ret = (char *)malloc(sizeof(char) * ft_strlen(str));
    ft_copy(&ret, str, 0);
    return (ret);
}