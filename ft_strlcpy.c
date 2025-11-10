/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:31:20 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/11 00:08:39 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *string);
void	*ft_memcpy(void *dest, void *src, size_t n);

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t srclen;
	srclen = ft_strlen(src);
	if(srclen < size)
		ft_memcpy(dst, src, srclen + 1);
	else if(size > 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}
