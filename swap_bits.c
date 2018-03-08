/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 17:23:45 by jwere             #+#    #+#             */
/*   Updated: 2018/03/08 17:48:39 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
  return ((octet >> 4 & 0x0F) | (0xF0 & octet << 4));
}
int		main()
{
	unsigned char k;
	unsigned char f;

	k = 4;
	f = swap_bits(k);
	printf("%c\n", f);
	return (0);
}
