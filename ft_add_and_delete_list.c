/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_and_delete_list.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:05:31 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/24 11:05:34 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_delete_list(t_list *stack)
{
	t_list	*node;

	while (stack != NULL)
	{
		node = stack;
		stack = stack->next;
		free(node);
	}
}

void ft_delete_first_node(t_list **stack)
{
	t_list	*node;

	node = (*stack);
	(*stack) = (*stack)->next;
	(*stack)->prev = NULL;
	free(node);
}

int	ft_delete_last_node(t_list **stack)
{
	t_list	*node;
	t_list	*first_node;
	int	last_data;
	
	if (!(*stack))
		return (0);
	first_node = (*stack);
	while ((*stack)->next != NULL)
		(*stack) = (*stack)->next;
	node = (*stack);
	(*stack) = (*stack)->prev;
	last_data = node->data;
	free(node);
	(*stack)->next = NULL;
	(*stack) = first_node;
	return (last_data);
}


void	*ft_add_at_the_end(t_list **stack, int new_data)
{
	t_list	*new_node;
	t_list	*prev_node;
	t_list	*first_node;

	//printf("%d \n",new_data);
	new_node = calloc(sizeof(t_list), 1);
	if(!new_node)
		return (NULL);
	new_node->data = new_data;
	new_node->next = NULL;
	new_node->prev = NULL;
	first_node = (*stack);
	if ((*stack) == NULL)
	{
		(*stack) = new_node;
		return (*stack);
	}
	else
	{
		while ((*stack)->next != NULL)
			(*stack) = (*stack)->next;
		(*stack)->next = new_node;
		new_node->prev = (*stack);
		(*stack)->prev = prev_node;
	}
	(*stack) = first_node;
}

void	*ft_add_at_the_beginning(t_list **stack, int new_data)
{
	t_list	*new_node;
	
	new_node = calloc(sizeof(t_list), 1);
	if (!new_node)
		return (NULL);
	new_node->data = new_data;
	if((*stack) = NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		(*stack) = new_node;
	}
	else
	{
		new_node->next = (*stack);
		new_node->prev = (NULL);
		(*stack)->prev = new_node;
		(*stack) = new_node;
	}
}
