#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!*str)
		return ;
	write(1, str++, 1);
	ft_putstr(str);
}

int		ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (1 + ft_strlen(str + 1));
}

int     exists(char c, char *str, int i)
{
    if (i == -1)
        return (0);
    if (str[i] == c)
        return (1);
    return exists(c, str, i - 1);
}

int       ft_wdmatch(char *s1, char *s2, int i)
{
    if (!s1[i])
        return (1);
    if (!exists(s1[i], s2, ft_strlen(s2)))
        return (0);
    return ft_wdmatch(s1, s2, i + 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        if (ft_wdmatch(av[1], av[2], 0))
            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}