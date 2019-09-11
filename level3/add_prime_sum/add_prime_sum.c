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

int     isprime(int n, int div)
{
    if (div == n)
        return (n);
    if (n < 2 || n % div == 0)
        return (0);
    return (isprime(n, div+1));
}

int     add_prime(int n)
{
    if (n < 2)
        return (0);
    return isprime(n, 2) + add_prime(n - 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_putnbr(add_prime(ft_atoi_mini(av[1])));
    write(1, "\n", 1);
    return (0);
}