#include <unistd.h>

void	ft_first_word(char *str)
{
	int stop = 0;

	if ((*str == ' ' || *str == '\t') && !stop)
		str = str + 1;
	if (*str != ' ' && *str != '\t')
	{
		write(1, str++, 1);
		stop = 1;
	}
	if (!*str || ((*str == ' ' || *str == '\t') && stop))
		return ;
	ft_first_word(str);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_first_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
