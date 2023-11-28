/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepare_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:37:38 by daleliev          #+#    #+#             */
/*   Updated: 2023/11/24 10:37:49 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char	*str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

long long	ft_atoi(char *argv)
{
	long long	final;
	int		sign;
	int		i;
	int		count;

	sign = 1;
	i = 0;
	final = 0;
	if(argv[i] == '-')
	{
		sign *= (-1);
		i++;
	}
	while (argv[i] == '0')
		i++;
	if (count = ft_strlen(&argv[i]) > 10)
		return (2147483648);
	while (argv[i] != '\0' && (argv[i] >= '0' && argv[i] <= '9'))
	{
		final *= 10;
		final += (argv[i] - '0');
		i++;
	}
	return (final * sign);
}

int	ft_check_argv(char *argv)
{
	int	i;
	
	i = 0;
	if (argv[i] == '-')
		i++;
	while (argv[i] != '\0')
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (0);
	}
	return (i);
}

int	ft_manage_argv(int argc, char *argv[], t_list **stack1)
{
	int		i;
	long long		temp;

	i = 1;
	while (i < argc)
	{
		if(!ft_check_argv(argv[i]))
			return (0);
		temp = ft_atoi(argv[i]);
		//printf("%lld \n",temp);
		if (temp > INT_MAX || temp < INT_MIN)
			return (0);
		else
			ft_add_at_the_end(stack1, (int)temp);
		i++;
	}
	return (1);
}
