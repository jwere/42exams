#include <stdlib.h>
#include <stdio.h>

void    make_range(int **tab, int start, size_t i, size_t len)
{
    if (i == len)
        return ;
    (*tab)[i] = start;
    make_range(tab, start+1, i+1, len);
}

int   *ft_range(int start, int end)
{
	int *tab;
  size_t len;
    
  if (start > end)
    return (NULL);
  len = end - start + 1;
	tab = (int *)malloc(sizeof(start) * len);
    make_range(&tab, start, 0, len);
	return (tab);
}

int   main(void)
{
int* res;
int i;

res = ft_range(5, 10);

for (i = 0; i < 6; i++)
  printf("%d,", res[i]);
printf("\n");

res = ft_range(-20, 15);
for (i = 0; i < 36; i++)
  printf("%d,", res[i]);
printf("\n");

res = ft_range(-2147483648, -2147483646);
for (i = 0; i < 2; i++)
	printf("%d,", res[i]);
printf("\n");

res = ft_range(10, 5);
printf("%x\n", (unsigned int)res);
}