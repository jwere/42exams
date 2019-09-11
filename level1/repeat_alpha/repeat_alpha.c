#include <unistd.h>

void	ft_rptchar(char c, int n)
{
	if (n < 0)
		return ;
	write(1, &c, 1);
	ft_rptchar(c, n - 1);
}

void	ft_repeat_alpha(char *str)
{
	if (!*str)
		return ;
	if (*str >= 'A' && *str <= 'Z')
		ft_rptchar(*str, *str - 65);
	else if (*str >= 'a' && *str <= 'z')
		ft_rptchar(*str, *str - 97);
	else
		ft_rptchar(*str, 0);
	ft_repeat_alpha(str + 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	ft_rptchar('\n', 0);
	return (0);
}
