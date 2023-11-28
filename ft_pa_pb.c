/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:24:27 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/24 14:24:30 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **stack1, t_list **stack2)
{
	int	save;
	
	save = (*stack2)->data;
	ft_delete_first_node(stack2);
	ft_add_at_the_beginning(stack1, save);
}


void	ft_pb(t_list **stack1, t_list **stack2)
{
	int	save;
	
	save = (*stack1)->data;
	ft_delete_first_node(stack1);
	ft_add_at_the_beginning(stack2, save);
}
