#include <unistd.h>

void	ft_rot_42(char *str, char c)
{
	if(!c)
		return ;
	if ((c >= 'A' && c <= 'J') || (c >= 'a' && c <= 'j'))
		c += 16;
	else if ((c >= 'K' && c <= 'Z') || (c >= 'k' && c <= 'z'))
		c -= 10;
	else
		c += 0;
	write(1, &c, 1);
	ft_rot_42(str + 1, *(str + 1));
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_42(argv[1], argv[1][0]);
	write(1, "\n", 1);
	return (0);
}