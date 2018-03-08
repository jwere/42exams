/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   returna.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:44:41 by jwere             #+#    #+#             */
/*   Updated: 2018/02/27 15:56:10 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int k;

	k = 0;
	if (argc == 2)
	{
		while (argv[1][k] != '\0')
		{
			if (argv[1][k] == 'a')
			{
				ft_putchar('a');
				break;
			}
			else
				k++;
		}
		ft_putchar('\n');
	}
	else if(argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
