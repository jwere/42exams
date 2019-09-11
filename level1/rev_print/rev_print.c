#include <unistd.h>

void	ft_revputstr(char *str)
{
	if (!*str)
		return ;
	ft_revputstr(str+ 1);
	write(1, str, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_revputstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
