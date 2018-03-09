/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_cap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 21:13:36 by jwere             #+#    #+#             */
/*   Updated: 2018/03/09 00:37:19 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
int		ft_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
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
		if (ft_upper(str[i]) == 1)
		   str[i] = str[i] + 32;
	i++;	
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i+1] == ' ' || str[i+ 1] == '\t' || str[i + 1] == '\0') && ft_lower(str[i]) == 1)
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
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
