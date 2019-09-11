int convert(char c)
{
    if (c >= '0' && c <= '9')
        return c - 48;
    if (c >= 'a' && c <= 'f')
        return c - 87;
    if (c >= 'A' && c <= 'F')
        return c - 55;
    return (0);
}

int	ft_atoi_base(char *str, int str_base)
{
    static int sign = 1;
    static int ret = 0;
    static int digit = 1;

    if (!*str || !digit)
        return (ret * sign);
    if ((*str >= '\t' && *str <= '\r') || *str == ' ')
        str = str + 1;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str = str + 1;
    if (convert(*str))
    {
        if (convert(*str) >= str_base)
            return (0);
        ret = ret * str_base + convert(*str);
        digit = 2;
    }
    if (!convert(*str) && digit == 2)
        digit = 0;
    return (ft_atoi_base(str + 1, str_base));
}