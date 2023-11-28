/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_for_double.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:26:15 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/24 13:31:04 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_for_double(t_list **stack)
{
	t_list	*actual_node;
	t_list	*cursor;
	
	actual_node = (*stack);
	while (actual_node)
	{
		cursor = actual_node->next;
		while (cursor)
		{
			if(cursor->data == actual_node->data)
				return (0);
			else
				cursor = cursor->next;
		}
		actual_node = actual_node->next;
	}
	return (1);
}
