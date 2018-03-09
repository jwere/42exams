/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 20:54:52 by jwere             #+#    #+#             */
/*   Updated: 2018/03/08 21:00:17 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		k;
	t_list *list;

	list = begin_list;
	k = 0;
	while (list)
	{
		k++;
		list = list->next;
	}
	return (k);
}
