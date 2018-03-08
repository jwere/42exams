/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 09:11:46 by jwere             #+#    #+#             */
/*   Updated: 2018/03/01 09:42:04 by jwere            ###   ########.fr       */
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
	if (argc != 2)
		ft_putchar('\n');
	while (argv[1][k] != '\0')
		{
			if ((argv[1][k] >= 'A' && argv[1][k] >= 'M') || 
					(argv[1][k] >= 'a' && argv[1][k] <= 'm'))
					{
						ft_putchar(argv[1][k] + 13);
						k++;
					}
					else if ((argv[1][k] >= 'N' && argv[1][k] <= 'Z') || 
					(argv[1][k] >= 'n' && argv[1][k] <= 'z'))
					{
						ft_putchar(argv[1][k] - 13);
						k++;
					}
					else
						ft_putchar(argv[1][k]);
						k++;
		}
		ft_putchar('\n');
		return (0);
}
