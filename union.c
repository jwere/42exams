/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 13:29:45 by jwere             #+#    #+#             */
/*   Updated: 2018/03/08 10:12:20 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_strcmp1(char *s1, char c)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int		ft_strcmp2(char *s2, char c, int i)
{
	while (i >= 0)
	{
		i--;
		if (s2[i] == c)
			return (1);
	}
	return (0);
}
int		main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while(argv[1][i])
	{
		if (ft_strcmp2(argv[1], argv[1][i], i) == 0)
			ft_putchar(argv[1][i]);
		i++;
	}
	i = 0;
	while(argv[2][i])
	{
		if (ft_strcmp2(argv[2], argv[2][i], i) == 0 && ft_strcmp1(argv[1], argv[2][i]) == 0)
			ft_putchar(argv[2][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
