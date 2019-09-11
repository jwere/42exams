#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!*str)
		return ;
	write(1, str++, 1);
	ft_putstr(str);
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
		ft_putstr(argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}