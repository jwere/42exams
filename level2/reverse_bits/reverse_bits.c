#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet)
{
    static int two = 256;

    if (two == 0)
        return ((octet % 2));
    two /= 2;
    return (octet % 2) * two + reverse_bits(octet/2);
}

// int main(void)
// {
//     printf("%c\n", reverse_bits('d'));
//     return (0);
// }