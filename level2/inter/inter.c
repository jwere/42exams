#include <unistd.h>

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

void       ft_inter(char *s1, char *s2, int i)
{
    if (!s1[i])
        return ;
    if (exists(s1[i], s2, ft_strlen(s2)) && !exists(s1[i], s1, i - 1))
        write(1, &s1[i], 1);
    ft_inter(s1, s2, i + 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_inter(av[1], av[2], 0);
    write(1, "\n", 1);
    return (0);
}