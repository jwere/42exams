/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 08:44:55 by jwere             #+#    #+#             */
/*   Updated: 2018/03/05 18:31:14 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
void		ft_putnb(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnb(nb / 10);
		ft_putnb(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	char *dst;
	int i;

	i = 0;
	while(src[i])
		i++;
	i++;
	dst = (char *)malloc(sizeof(char) * i);
	while (i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
	return (dst);
}
char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}
int		main()
{
	char k[] = "jimmy";
	char l[] = "JI";
	int nb;
	char *p;
	char *q;
	ft_putstr(k);
	ft_putchar('\n');
	nb = ft_strlen(k);
	ft_putnb(nb);
	ft_putchar('\n');
	ft_putnb(nb);
	ft_putchar('\n');
	p = ft_strdup(k);
	ft_putstr(p);
	ft_putchar('\n');
	q = ft_strcpy(k, l);
	ft_putstr(q);
	ft_putchar('\n');
	return (0);
}
