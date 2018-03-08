/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 10:17:09 by jwere             #+#    #+#             */
/*   Updated: 2018/03/06 13:52:45 by jwere            ###   ########.fr       */
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

	i = 0;
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				ft_putchar(155 -  av[1][i]);
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar(219 - av[1][i]);
			else
				ft_putchar(av[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return(0);
}
