#include <unistd.h>

void	ft_maff_alpha(char alpha)
{
	char c = alpha;
	if (alpha == 'z' + 1)
		return ;
	if (c % 2 == 0)
		c -= 32;
	write(1, &c, 1);
	ft_maff_alpha(alpha + 1);
}

int		main(void)
{
	ft_maff_alpha('a');
	write(1, "\n", 1);
	return (0);
}