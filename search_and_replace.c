/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:37:06 by jwere             #+#    #+#             */
/*   Updated: 2018/03/07 12:15:06 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_strlen(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
		k++;
	return (k);
}
void	ft_search_and_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			{
				ft_putchar(b);
			}
		else
			ft_putchar(str[i]);
		i++;
	}
}
int		main(int ac, char **av)
{
	if (ac != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	if (ft_strlen(av[2]) != 1 || ft_strlen(av[3]) != 1)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_search_and_replace(av[1], av[2][0], av[3][0]);
		ft_putchar('\n');
	}
	return (0);
}
