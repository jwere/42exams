/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lswd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 18:14:34 by jwere             #+#    #+#             */
/*   Updated: 2018/03/07 10:35:22 by jwere            ###   ########.fr       */
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

	k = 0;
	if (argc != 2 || argv[1][k] == '\0')
		ft_putchar('\n');
	else
	{
		while (argv[1][k] != '\0')
			k++;

		k--;
		while (argv[1][k] == '\t' || argv[1][k] == ' ')
			k--;

		while (argv[1][k] != '\t' && argv[1][k] != ' ' && argv[1][k] != '\0')
			k--;
		k++;
		while (argv[1][k] != '\t' && argv[1][k] != ' ' && argv[1][k] != '\0') 
		{
			ft_putchar(argv[1][k]);
				k++;
		}
		ft_putchar('\n');
	}
	return (0);
}
