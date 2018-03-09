/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 00:40:13 by jwere             #+#    #+#             */
/*   Updated: 2018/03/09 01:28:48 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_capt(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			ft_putchar(str[i] - 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}
int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{ 
			ft_capt(av[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
