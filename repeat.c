/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 12:47:55 by jwere             #+#    #+#             */
/*   Updated: 2018/03/01 13:14:50 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(int argc, char **argv)
{
	int k;
	int n;

	if (argc != 2)
		ft_putchar('\n');
	else
		while (argv[1][k] != '\0')
		{
			if (argv[1][k] >= 'a' && argv[1][k] <= 'z')
			{
				n = argv[1][k] - 96;
				while (n > 0)
				{
					ft_putchar(argv[1][k]);
					n--;
				}
			}
			else if (argv[1][k] >= 'A' && argv[1][k] <= 'Z')
			{
				n = argv[1][k] - 64;
				while (n > 0)
				{
					ft_putchar(argv[1][k]);
					n--;
				}
			}
			else
				ft_putchar(argv[1][k]);
			k++;
		}
	ft_putchar('\n');
	return (0);
}
