#include <unistd.h>

int     ft_atoi_mini(char *str)
{
    int ret = 0;

    while(*str)
        ret = ret * 10 + *str++ - 48;
    return (ret);
}

void    print_hex(int nb)
{
    static char str[16] = "0123456789abcdef";

    if (nb >= 16)
    {
        print_hex(nb/16);
        print_hex(nb%16);
    }
    else
        write(1, &str[nb], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi_mini(av[1]));
    write(1, "\n", 1);
    return (0);
}