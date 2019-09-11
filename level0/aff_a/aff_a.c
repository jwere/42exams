#include <unistd.h>

void	ft_aff_a(char *str)
{
	if (!*str)
		return ;
	if (*str == 'a')
	{
		write(1, "a", 1);
		return ;
	}
	ft_aff_a(str + 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_aff_a(argv[1]);
	write(1, "\n", 1);
	return (0);
}
