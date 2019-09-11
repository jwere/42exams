int		ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (1 + ft_strlen(str + 1));
}