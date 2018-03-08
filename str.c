/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 08:19:28 by jwere             #+#    #+#             */
/*   Updated: 2018/02/20 15:23:29 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*void ft_putchar(char c)
{
	write(1, &c, 1);
}
char ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		str++;
	}
}*/
char	*ft_strstr(char *str, char *to_find)
{
	int j;
	int k;

	j = 0;
	k = 0;
	if (to_find == '\0')
		return (str);
	while (str[j] != '\0' && to_find[k] != '\0')
	{
		if (str[j] != to_find[k])
		k = 0;
		if (str[j] == to_find[k])
		{
			j++;
			k++;
		}
		else
			j++;
	}
	if (to_find[k] == '\0')
		return (to_find);
	else
		return ((void*) 0);
}
int main(void)
{
	char str[] = "Hello Jimmy";
	char to_find[] = "Jimmy";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
