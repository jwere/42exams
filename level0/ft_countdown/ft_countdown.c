#include <unistd.h>

void	ft_countdown(char c)
{
	if (c >= 48)
		write(1, &c, 1);
	else
		return ;
	ft_countdown(c - 1);
}

int		main(void)
{
	ft_countdown(57);
	write(1, "\n", 1);
	return (0);
}