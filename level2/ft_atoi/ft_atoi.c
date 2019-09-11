int	ft_atoi(const char *s)
{
    static int sign = 1;
    static int ret = 0;
    static int digit = 1;
    char *str = (char *)s;

    if (!*str || !digit)
        return (ret * sign);
    if (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
        str = str + 1;
    if (*str == '-')
        sign = -1;
    if (*str == ' ' || *str == '+')
        str = str + 1;
    if (*str >= '0' && *str <= '9')
    {
        ret = ret * 10 + *str - 48;
        digit = 2;
    }
    if (!(*str >= '0' && *str <= '9') && digit == 2)
        digit = 0;
    return (ft_atoi((const char *)(str + 1)));
}