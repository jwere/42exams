#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    if (!*str)
        return ;
    if (*str >= 'A' && *str <= 'Z')
        *str += 32;
    if ((*str >= 'a' && *str <= 'z') && (str[1] == ' ' || str[1] == '\t' || str[1] == '\0'))
        *str -= 32;
    write(1, str, 1);
    rstr_capitalizer(str+1);
}

int		main(int ac, char **av)
{
	if (ac > 1)
    {
        int i = 1;
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