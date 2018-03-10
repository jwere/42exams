/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 13:45:51 by jwere             #+#    #+#             */
/*   Updated: 2018/03/01 14:54:09 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')

	{
		ft_putchar(str[i]);
		k++;
	}
}
char	*ft_strcpy(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s2[k] != '\0')
	{
		s1[k] = s2[k];
		k++;
	}
	s1[k] = '\0';
	return (s1);
}
int		main(void)
{
	int *p;
	char *s1;
	char *s2;

	s1 = " ";
	s2 = "Jimmy";
	p = *ft_strcpy(s1, s2);
	ft_putstr(*p);
	return (0);
}
