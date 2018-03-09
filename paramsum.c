/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 01:33:44 by jwere             #+#    #+#             */
/*   Updated: 2018/03/09 02:21:06 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_putnb(int nb)
{
	if (nb < 0)
		nb = -nb;
	else if (nb > 10)
	{
		ft_putnb(nb / 10);
		ft_putnb(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (nb);
}
int		main(int ac, char **av)
{
	int k;

	k = 0;
	if (ac > 1)
	{
		while (k < ac)
			k++;
			k = k - 1;
			ft_putnb(k);
			ft_putchar('\n');
			return (0);
	}
	ft_putchar('\n');
	return (0);
}
