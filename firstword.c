/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:47:09 by jwere             #+#    #+#             */
/*   Updated: 2018/02/28 11:48:24 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int k;

	k = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		while (argv[1][k] == '\t' || argv[1][k] == ' ')
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
