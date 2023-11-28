/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:14:00 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/20 10:17:48 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(t_list *stack)
{
	ft_delete_list(stack);
	write (1,"Error\n", 6);
	return (0);
}

int	ft_check_last(t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp->data);
}

int main (int argc, char *argv[])
{
	t_list	*stack1;
	int	still;

	stack1 = NULL;
	if (argc < 2)
		return (0);
	if (!ft_manage_argv(argc, argv, &stack1) || !ft_check_for_double(&stack1))
		return (ft_error(stack1));
	ft_algorithme(&stack1);
}
