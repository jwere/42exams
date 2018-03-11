/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_match.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 16:02:11 by jwere             #+#    #+#             */
/*   Updated: 2018/03/08 17:08:42 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
int 	main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[2][j] != '\0')
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
		{
			ft_putstr(av[1]);
		}
	}
	ft_putchar('\n');
	return(0);
}
