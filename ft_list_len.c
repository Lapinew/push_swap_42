/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:23:52 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/25 13:24:09 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_len(t_list *stack)
{
	int	count;
	
	count = 0;
	if (!stack)
		return (count);
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}
