/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:23:15 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/04 11:43:45 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	temp;

	src = (unsigned char *) dest;
	temp = (unsigned char) c;
	i = 0;
	while (i < count)
	{
		src[i] = temp;
		i += 1;
	}
	return ((void *) src);
}
