/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 21:01:59 by jwere             #+#    #+#             */
/*   Updated: 2018/03/08 21:09:00 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int k;
	t_list *list;

	list = begin_list;
	k = 0;
	while (list)
	{
		k++;
		list = list->next
	}
	return(k);
}
