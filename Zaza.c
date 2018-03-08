/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZAza.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:29:57 by jwere             #+#    #+#             */
/*   Updated: 2018/03/01 11:26:40 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int q, char **p)
{
	int k;

	k = 0;
	if (q != 2)
		ft_putchar('\n');
	else
	{
		while (p[1][k] != '\0')
		{
			if (p[1][k] >= 'a' && p[1][k] <= 'z')
			{
				if (p[1][k] == 'z')
				{
					ft_putchar('a');
				}
				else
					ft_putchar(p[1][k] + 1);
			}
			else if (p[1][k] >= 'A' && p[1][k] <= 'Z')
			{
				if (p[1][k] == 'Z')
				{
					ft_putchar('A');
				}
				else
					ft_putchar(p[1][k] + 1);
			}
			else
				ft_putchar(p[1][k]);
			++k;
		}
	}
	ft_putchar('\n');
	return (0);
}
