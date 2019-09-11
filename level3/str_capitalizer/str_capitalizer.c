#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    static int i = 0;

    if (!str[i])
    {
        i = 0;
        return ;
    }
    if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;
    if ((str[i] >= 'a' && str[i] <= 'z') && (str[i-1] == ' ' || str[i-1] == '\t' || i == 0))
        str[i] -= 32;
    write(1, &str[i], 1);
    i++;
    rstr_capitalizer(str);
}

int		main(int ac, char **av)
{
    int i;
	if (ac > 1)
    {
        i = 1;
        while (av[i])
        {
            rstr_capitalizer(av[i++]);
            write(1, "\n", 1);
        }
    }
    else
	    write(1, "\n", 1);
	return (0);
}