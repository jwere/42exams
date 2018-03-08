/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 14:08:11 by jwere             #+#    #+#             */
/*   Updated: 2018/03/06 16:03:03 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int x;
	int y;
	int answer;

	if (ac != 4)
		write(1, "\n", 1);
	else
	{
		if (av[2][1] == '\0')
		{
			x = atoi(av[1]);
			y = atoi(av[3]);
			if (av[2][0] == '*')
				answer = x * y;
			if (av[2][0] == '/')
				answer = x / y;
			if (av[2][0] == '+')
				answer = x + y;
			if (av[2][0] == '-')
				answer = x - y;
			if (av[2][0] == '%')
				answer = x % y;
			printf("%i\n", answer);
		}
	}
	return (0);
}
