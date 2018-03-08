/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 08:40:22 by jwere             #+#    #+#             */
/*   Updated: 2018/03/06 09:23:06 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_bits(unsigned char octet)
{
	int i;
	int swap;
	char result[8];

	swap = octet;
	i = 7;
	while (i >= 0)
	{
		result[i] = swap % 2 + '0';
		swap = swap / 2;
		i--;
	}
	i = 0;
	while (i < 8)
	{
		write(1, &result[i], 1);
		i++;
	}
}
int main()
{
	unsigned char octet;
	octet = 'k';
	ft_print_bits(octet);
	return (0);
}

