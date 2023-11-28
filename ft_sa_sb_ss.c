/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_sb_ss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:59:21 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/24 13:59:48 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **stack1)
{
	t_list	*node1;
	t_list	*swap;
	
	node1 = (*stack1);
	(*stack1) = (*stack1)->next;
	swap = (*stack1);
	(*stack1)->data = node1->data;
	node1->data = swap->data;
	(*stack1) = node1;
	write(1,"sa\n",5);
}


void	ft_sb(t_list **stack2)
{
	t_list	*node1;
	t_list	*swap;
	
	node1 = (*stack2);
	(*stack2) = (*stack2)->next;
	swap = (*stack2);
	(*stack2)->data = node1->data;
	node1->data = swap->data;
	(*stack2) = node1;
	write(1,"sb\n",5);
}


void	ft_ss(t_list **stack2, t_list **stack1)
{
	t_list	*node1;
	t_list	*swap;
	
	node1 = (*stack1);
	(*stack1) = (*stack1)->next;
	swap = (*stack1);
	(*stack1)->data = node1->data;
	node1->data = swap->data;
	(*stack1) = node1;
	node1 = (*stack2);
	(*stack2) = (*stack2)->next;
	swap = (*stack2);
	(*stack2)->data = node1->data;
	node1->data = swap->data;
	(*stack2) = node1;
	write(1,"ss\n",5);
}
