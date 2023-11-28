/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:13:07 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/25 13:13:33 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_order(t_list *stack)
{
	t_list	*node;
	
	node = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->data < node->data)
			return (1);
		else
		{
			stack = stack->next;
			node = node->next;
		}
	}
	return (0);
}

int	ft_check_descending_order(t_list *stack)
{
	t_list	*node;
	
	node = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->data > node->data)
			return (1);
		else
		{
			stack = stack->next;
			node = node->next;
		}
	}
	return (0);
}
/*
int	*ft_make_tab(t_list *stack1, int len)
{
	int	*tab;
	int	i;
	int	count;
	
	tab = malloc(len * sizeof(int));
	if(!tab)
		return (NULL);
	i = 0;
	while (stack)
	{
		tab[i] = stack1->data;
		stack1 = stack1->next;
	}
	return (tab);
}

int	*ft_order_tab(int *tab, int len)
{
	int	i;
	int	j;
	int	swap;
	
	i = 0;
	while (i < len)
	{
		j = i + 1
		while (j < len)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

t_list	*ft_change_list_data(int count, t_list *stack1, int index)
{
	t_list	*node1;
	
	node1 = stack1;
	while (count)
	{
		stack1 = stack1->next;
		count--;
	}
	stack1->data = index;
	stack1 = node1;
	return (stack1);
}

t_list	*ft_replace_by_index(t_list *stack1)
{
	int	len;
	int	*tab;
	int	*tab_in_order
	int	i;
	int	save_stack;
	
	len = ft_list_len(stack1);
	tab = (ft_make_tab(stack1, len));
	tab_in_order = ft_order_tab(tab, len);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (tab[j] != tab_in_order[i])
			j++;
		stack1 = ft_change_list_data(j, stack1, i);
		i++;
	}
	return (stack1);
}*/
