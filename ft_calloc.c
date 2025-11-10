/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:46:26 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 09:45:09 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc(num * size);
	i = 0;
	if (num <= 0 || size <= 0)
	{
		return (NULL);
	}
	while (i < num * size)
	{
		mem[i] = 0;
		i += size;
	}
	return (mem);
}
