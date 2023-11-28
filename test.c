#include "push_swap.h"

int	ft_check_first()
{
	stack->data;
}

int	ft_check_last(t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp->data);
}

void	ft_exe_three(int first, int second, int third, t_list **stack1)
{
	if (first > second && first < third)
		ft_sa(stack1);
	else if (first > second && first > third && second > third)
	{
		ft_sa(stack1);
		ft_rra(stack1);
	}
	else if (first > second && first > third && second < third)
		ft_ra(stack1);
	else if (first < second && first < third)
	{
		ft_sa(stack1);
		ft_ra(stack1);
	}
	else if (first < second && first > third)
		ft_rra(stack1);
}


ft_manage_three(t_list **stack1)
{
	t_list	*save;
	int		first;
	int		second;
	int		third;
	
	save = (*stack1);
	first = save->data;
	save = save->next;
	second = save->data;
	save = save->next;
	third = save->data;
	ft_exe_three(first, second, third, stack1);
}