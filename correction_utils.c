/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correction_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:35:42 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/26 15:36:01 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_list(t_list *stack)
{
	int	i;
	
	i = 1;
	while(stack)
	{
		printf("node : %d = %d", i, stack->data);
		i++;
		stack = stack->next;
	}
}
