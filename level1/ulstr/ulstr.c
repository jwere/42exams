#include <unistd.h>

void	ft_ulstr(char *str)
{
	if(!*str)
		return ;
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
	else if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	else
		*str += 0;
	write(1, str, 1);
	ft_ulstr(str + 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}