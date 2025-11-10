/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:48:12 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 23:44:56 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *string);
void	*ft_memcpy(void *dest, void *src, size_t n);

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		dstlen = size;
	if (dstlen == size)
		return (size + srclen);
	ft_memcpy(dst + dstlen, src, size - dstlen - 1);
	dst[size - 1] = '\0';
	return (dstlen + srclen);
}
