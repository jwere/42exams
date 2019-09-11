#include <unistd.h>

void	ft_alpha_mirror(char *str)
{
	if(!*str)
		return ;
	if (*str >= 'A' && *str <= 'Z')
		*str = 155 - *str;
	else if (*str >= 'a' && *str <= 'z')
		*str = 219 - *str;
	else
		*str += 0;
	write(1, str, 1);
	ft_alpha_mirror(str + 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}