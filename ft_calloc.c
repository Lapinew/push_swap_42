/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daleliev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:50:22 by daleliev          #+#    #+#             */
/*   Updated: 2023/10/20 13:07:28 by daleliev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*final;

	if (nmemb == 0 || size == 0)
	{
		final = malloc(1);
		if (final == NULL)
			return (NULL);
	}
	else
	{
		final = malloc(nmemb * size);
		if (final == NULL)
			return (NULL);
	}
	ft_bzero(&final, nmemb * size);
	return (final);
}
