/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 03:52:55 by jwere             #+#    #+#             */
/*   Updated: 2018/02/18 16:14:38 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int c;

	c = (nb - 1);
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (c > 1)
	{
		nb *= c;
		c--;
	}
	return (nb);
}
int main(void)
{
	printf("%d\n",ft_iterative_factorial(5));
			return (0);
}
