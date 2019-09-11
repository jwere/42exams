#include <unistd.h>

int    hidenup(char *s1, char *s2)
{
    if (!*s1)
        return (1);
    if (!*s2)
        return (0);
    if (*s1 == *s2)
        return hidenup(s1 + 1, s2 + 1);
    return hidenup(s1, s2 + 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        if (hidenup(av[1], av[2]))
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}