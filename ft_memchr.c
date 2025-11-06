/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:24:24 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/05 14:33:55 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr( void *memoryBlock, int searchedChar, size_t size )
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) memoryBlock;
	while (i < size)
	{
		if (str[i] == searchedChar)
		{
			return (&str[i]);
		}
		i++;
	}
	return ((void *) NULL);
}
