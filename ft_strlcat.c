/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:48:12 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 11:39:06 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *string);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	unsigned int	len_dest;

	len_dest = ft_strlen(dst);
	i = 0;
	while (src[i] && i < size)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + i);
}
