/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_rrb_rrr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:30:23 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/24 15:30:47 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.
rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
la pile b. Le dernier élément devient le premier.
rrr : rra et rrb en même temps.*/

void	ft_rra(t_list **stack1)
{
	int	data;
	
	data = ft_delete_last_node(stack1);
	ft_add_at_the_beginning(stack1, data);
	write (1, "rra\n", 5);
}

void	ft_rrb(t_list **stack2)
{
	int	data;
	
	data = ft_delete_last_node(stack2);
	ft_add_at_the_beginning(stack2, data);
	write(1, "rrb\n",5);
}

void	ft_rrr(t_list **stack1, t_list **stack2)
{
	int	data1;
	int	data2;
	
	data1 = ft_delete_last_node(stack1);
	data2 = ft_delete_last_node(stack2);
	ft_add_at_the_beginning(stack1, data1);
	ft_add_at_the_beginning(stack2, data2);
	write(1, "rrb\n", 5);
}

