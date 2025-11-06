/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:48:12 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/04 14:00:48 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	h;

	i = 0;
	j = 0;
	h = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	while (i + h < size - 1 && src[h])
	{
		dst[i + h] = src[h];
		h++;
	}
	dst[size] = '\0';
	return (i + h);
}
