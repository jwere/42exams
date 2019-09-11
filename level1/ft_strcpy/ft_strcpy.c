
void    ft_copy(char **dst, char *src, int i)
{
    (*dst)[i] = *src;
    if (!*src)
        return ;
    ft_copy(dst, src + 1, i + 1);
}

char *ft_strcpy(char *s1, char *s2)
{
    ft_copy(&s1, s2, 0);
    return (s1);
}