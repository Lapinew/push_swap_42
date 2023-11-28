/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:37:32 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/20 19:37:35 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


typedef struct	s_list
{
	int	data;
	struct s_list	*prev;
	struct s_list	*next;	
}t_list;

int	ft_manage_argv(int argc, char *argv[], t_list **stack1);
long long	ft_atoi(char *argv);
int	ft_error(t_list *stack);
void ft_delete_list(t_list *stack);
void ft_delete_first_node(t_list **stack);
int	ft_delete_last_node(t_list **stack);
void	*ft_add_at_the_end(t_list **stack, int new_data);
void	*ft_add_at_the_beginning(t_list **stack, int new_data);
int	ft_check_for_double(t_list **stack);
int	ft_check_order(t_list	*stack);
int	ft_list_len(t_list *stack);
void	ft_pa(t_list **stack1, t_list **stack2);
void	ft_pb(t_list **stack1, t_list **stack2);
void	ft_ra(t_list **stack1);
void	ft_rb(t_list **stack2);
void	ft_rr(t_list **stack1, t_list **stack2);
void	ft_rra(t_list **stack1);
void	ft_rrb(t_list **stack2);
void	ft_rrr(t_list **stack1, t_list **stack2);
void	ft_sa(t_list **stack1);
void	ft_sb(t_list **stack2);
void	ft_ss(t_list **stack2, t_list **stack1);
void	ft_algorithme(t_list **stack1);
void	*ft_calloc(size_t nmemb, size_t size);

# endif
