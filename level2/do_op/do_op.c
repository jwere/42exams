#include <stdio.h>
#include <stdlib.h>

int     ft_do_op(int a, char op, int b)
{
    if (op == '%' && b != 0)
        return (a % b);
    else if (op == '/' && b != 0)
        return (a / b);
    else if (op == '*')
        return (a * b);
    else if (op == '+')
        return (a + b);
    else if (op == '-')
        return (a - b);
    else
        return (0);
}

int main(int ac, char **av)
{
    if (ac == 4)
        printf("%d", ft_do_op(atoi(av[1]), av[2][0], atoi(av[3])));
    printf("\n");
    return (0);
}