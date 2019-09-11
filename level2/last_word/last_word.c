#include <unistd.h>

void    ft_last_word(char *str, int i, int j)
{
    if (!str[i] && !j)
        ft_last_word(str, i - 1, j + 1);
    if (str[i] && !j)
        ft_last_word(str, i + 1, j);
    if ((str[i] == ' ' || str[i] == '\t') && j == 1)
        ft_last_word(str, i - 1, j);
    if (!(str[i] == ' ' || str[i] == '\t' || !str[i]) && j >= 1)
        ft_last_word(str, i - 1, j + 1);
    if ((str[i] == ' ' || str[i] == '\t' || !str[i]) && j > 1)
    {
        i++;
        while(!(str[i] == ' ' || str[i] == '\t') && str[i])
            write(1, &str[i++], 1);
        return ;
    }
    else
        return ;
}
int main(int ac, char **av)
{
    if (ac == 2)
        ft_last_word(av[1], 0, 0);
    write(1, "\n", 1);
    return (0);
}