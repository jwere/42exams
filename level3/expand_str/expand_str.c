#include <unistd.h>

int			is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void    ft_expand(char *str)
{
    static int space = 0;

    if (!*str)
        return ;
    if (is_space(*str))
        space = 1;
    if (!is_space(*str) && space)
        space = write(1, "   ", 3) - 3;
    if (!is_space(*str))
        write(1, str, 1);
    ft_expand(str+1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
    {
        while (is_space(*(av[1])))
            (av[1])++;
	    ft_expand(av[1]);
    }
	write(1, "\n", 1);
	return (0);
}