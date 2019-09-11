unsigned int     ft_pgcd(unsigned int a, unsigned int b)
{
    static unsigned int ans = 1;
    static unsigned int div = 1;

    if (div >= a || div >= b)
        return (ans);
    if (div % a == 0 && div % b == 0)
        ans = div;
    div++;
    return (ft_pgcd(a, b));
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    return (a * b)/ft_pgcd(a, b);
}