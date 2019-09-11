#include <stdio.h>
#include <stdlib.h>

int     ft_pgcd(int a, int b)
{
    static int ans = 1;
    static int div = 1;
    if (div >= a || div >= b)
        return (ans);
    if (div % a == 0 && div % b == 0)
        ans = div;
    div++;
    return (ft_pgcd(a, b));
}

int main(int ac, char **av)
{
    if (ac == 3)
        printf("%d\n", ft_pgcd(av[1], av[2]));
    printf("\n");
    return (0);
}
