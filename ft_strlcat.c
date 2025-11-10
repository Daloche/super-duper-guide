/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:48:12 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 14:27:25 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *string);
void	*ft_memcpy(void *dest, void *src, size_t n);

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	ft_memcpy(dst + size, src, ft_strlen(src));
	return (ft_strlen(dst));
}
