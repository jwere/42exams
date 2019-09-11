#include <unistd.h>

void	ft_rotone(char *str, char c)
{
	if(!c)
		return ;
	if ((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z'))
		c += 1;
	else if (c == 'Z' || c == 'z')
		c -= 25;
	else
		c += 0;
	write(1, &c, 1);
	ft_rotone(str + 1, *(str + 1));
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1], argv[1][0]);
	write(1, "\n", 1);
	return (0);
}