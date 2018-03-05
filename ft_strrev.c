/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:53:13 by jwere             #+#    #+#             */
/*   Updated: 2018/03/05 18:31:00 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{

	int i;
	int n;
	char temp;

	while (str[i] != '\0')
		i++;
	n = i;
	i = 0;
	while (n - 1 > i)
	{
		temp = str[i];
		str[i] = str[n - 1];
		str[n - 1] = temp;
		n--;
		i++;
	}
	return (str);
}
int		main(int argc, char **argv)
{
	char *l;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		l = ft_strrev(argv[1]);
		while (*l)
		write(1, l++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
