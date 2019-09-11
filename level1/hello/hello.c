#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!*str)
		return ;
	write(1, str++, 1);
	ft_putstr(str);
}

int	main(void)
{
	ft_putstr("Hello World!\n");
	return (0);
}
