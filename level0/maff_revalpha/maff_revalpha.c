#include <unistd.h>

void	ft_maff_alpha(char alpha)
{
	char c = alpha;
	if (alpha == 'a' - 1)
		return ;
	if (c % 2 == 1)
		c -= 32;
	write(1, &c, 1);
	ft_maff_alpha(alpha - 1);
}

int		main(void)
{
	ft_maff_alpha('z');
	write(1, "\n", 1);
	return (0);
}
