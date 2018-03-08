/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capt_last_letter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 18:04:39 by jwere             #+#    #+#             */
/*   Updated: 2018/03/07 09:18:14 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(int ac, char **av)
{
	int i;
	int n;

	i = 0;
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = av[1][i] + 32;
			i++;
		}
		i--;
		while (i >= 0)
		{
			while ((av[1][i] == '\t' || av[1][i] == ' ') && i >= 0)
				i--;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = av[1][i] - 32;
			while (av[1][i] != '\t' && av[1][i] != ' ' && i >= 0)
				i--;
		}
		i = 0;
		while (av[1][i] != '\0')
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	return (0);
}
