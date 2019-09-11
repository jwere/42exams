#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
    static int i = 0;

    if (i == 8)
        return ;
    i++;
    if (octet >= 2 || i < 9)
	{
		print_bits(octet / 2);
		ft_putchar(octet % 2 + '0');
	}
	else
		ft_putchar(octet + '0');
}
// int main(void)
// {
//     print_bits('8');
//     ft_putchar('\n');
// }