/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:31:20 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/04 14:00:18 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[size] = '\0';
	while (src[j])
		j++;
	return (j);
}
