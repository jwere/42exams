/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showz.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 22:31:58 by jwere             #+#    #+#             */
/*   Updated: 2018/02/23 00:32:37 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{	
		write(1, &str[k], 1);
		k++;
	}
}
int main(void)
{
	ft_putstr('Jimmy');
	return (0);
}