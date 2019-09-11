int is_power_of_2(unsigned int n)
{
    if (n == 1)
        return (1);
    if (n % 2 != 0 || n == 0)
        return (0);
    return (is_power_of_2(n / 2));
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
//     if (ac == 2)
//         printf("%d\n", is_power_of_2(atoi(av[1])));
//     return (0);
// }