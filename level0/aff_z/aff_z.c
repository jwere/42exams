#include <unistd.h>

void	ft_aff_z(char *str)
{
	if (!str || *str == 'z' || !*str)
	{
		write(1, "z\n", 2);
		return ;
	}
	ft_aff_z(str + 1);
}

int		main(int argc, char **argv)
{
	if (argc >= 1)
		ft_aff_z(argv[1]);
	return (0);
}
