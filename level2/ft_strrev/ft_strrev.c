void    ft_reverse(char **str, int i, int len)
{
    char temp;

    if (i >= len)
        return ;
    temp = (*str)[i];
    (*str)[i] = (*str)[len];
    (*str)[len] = temp;
    ft_reverse(str, i + 1, len - 1);
}

char    *ft_strrev(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    ft_reverse(&str, 0, len - 1);
    return (str);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
//     if (ac == 2)
//         printf("%s\n", ft_strrev(av[1]));
//     return (0);
// }