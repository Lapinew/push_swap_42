/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_rb_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:11:11 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/24 15:12:15 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier.
rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
Le premier élément devient le dernier.
rr : ra et rb en même temps.
*/

void	ft_ra(t_list **stack1)
{
	int	first_data;
	
	first_data = (*stack1)->data;
	ft_delete_first_node(stack1);
	ft_add_at_the_end(stack1, first_data));
		//return null if !
	write(1,"ra\n",5);
}


void	ft_rb(t_list **stack2)
{
	int	first_data;
	
	first_data = (*stack2)->data;
	ft_delete_first_node(stack2);
	ft_add_at_the_end(stack2, first_data));
		//return (NULL);
	write(1,"rb\n",5);
}


void	ft_rr(t_list **stack1, t_list **stack2)
{
	int	first_data;
	
	first_data = (*stack2)->data;
	ft_delete_first_node(stack2);
	ft_add_at_the_end(stack2, first_data))
	first_data = (*stack1)->data;
	ft_delete_first_node(stack1);
	ft_add_at_the_end(stack1, first_data));
	write(1,"rr\n",5);
}
