/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 12:15:24 by jwere             #+#    #+#             */
/*   Updated: 2018/03/07 13:26:30 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
char	ft_inter(char *a, char *b)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = 0;
	while (a[i] != '\0' && b[j] != '\0')
	{
		while(a[i] == a[i] || a[i] == b[j])
		{
			a[i] = a[j + 1];
			i++;
		}
		return (a[i]);
		i++;
	}
	return (0);
}
int		main(int ac, char **av)
{
	char *p;
	char *q;
	char k;

	p = "loveo";
	q = "lovely";
	k = ft_inter(p, q);
	printf("%c\n", k);
	return (0);
}
