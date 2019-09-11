#include <unistd.h>

void	ft_rot_13(char *str, char c)
{
	if(!c)
		return ;
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		c += 13;
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		c -= 13;
	else
		c += 0;
	write(1, &c, 1);
	ft_rot_13(str + 1, *(str + 1));
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1], argv[1][0]);
	write(1, "\n", 1);
	return (0);
}