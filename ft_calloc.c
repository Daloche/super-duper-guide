/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:46:26 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/06 11:58:57 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	char	*arr;
	size_t	i;

	arr = malloc(size);
	i = 0;
	while (i < size)
	{
		arr[i] = num;
		i++;
	}
	return (arr);
}
