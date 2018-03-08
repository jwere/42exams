/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 17:19:52 by jwere             #+#    #+#             */
/*   Updated: 2018/03/06 18:00:33 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
int		ft_atoi(const char *str)
{
	int i;
	int n;

	if ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
		n = -1;
	else
		n = 1;
	if (*str == '-' || *str == '+')
		str++;
	i = 0;
	while (*str && ft_isdigit(*str))
		i = (i * 10) + (*str++ - '0');
	return (i * n);
}
int		main()
{
	printf("%i\n", ft_atoi("9"));
	printf("%i\n", atoi("9"));
	return (0);
}
