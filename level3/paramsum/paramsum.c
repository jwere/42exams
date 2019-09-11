#include <unistd.h>

void    ft_putnbr(int nb)
{
    char c;

    if (nb >= 10)
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
    else
    {
        c = nb + 48;
        write(1, &c, 1);
    }
}

int main(int ac, char **av)
{
    (void)av;
    ft_putnbr(ac - 1);
    write(1, "\n", 1);
    return (0);
}