#include <unistd.h>

int	ft_atoi_mini(char *str)
{
    static int ret;
    if (!*str)
        return (ret);
    ret = ret * 10 + *str - 48;
    return ft_atoi_mini(str + 1);
}

void    ft_putnbr(int nb)
{
    char c;
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    if (nb < 10)
    {
        c = nb + 48;
        write(1, &c, 1);
    }
}

void     tab_mult(int i, int nb)
{
    if (i > 9)
        return ;
    ft_putnbr(i);
    write(1, " x ", 3);
    ft_putnbr(nb);
    write(1, " = ", 3);
    ft_putnbr(nb*i);
    write(1, "\n", 1);
    tab_mult(i + 1, nb);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        tab_mult(1, ft_atoi_mini(av[1]));
    else
        write(1, "\n", 1);
    return (0);
}