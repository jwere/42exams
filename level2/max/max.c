int		max(int* tab, unsigned int len)
{
    len--;
    if (!len)
        return *tab;
    if (tab[len] > tab[len - 1])
        tab[len - 1] = tab[len];
    return (max(tab, len));
}

//#include <stdio.h>
// int main(void)
// {
//     int tab[5] = {9, 1, 75, -2, 7};
//         printf("%d\n", max(tab, 5));
//     return (0);
// }