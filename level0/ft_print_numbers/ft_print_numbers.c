#include <unistd.h>

void	ft_putchar(char c)
{
	if (c <= 57)
		write(1, &c, 1);
	else
		return ;
	ft_putchar(c + 1);
}

void	ft_print_numbers(void)
{
	ft_putchar(48);
	write(1, "\n", 1);
}
