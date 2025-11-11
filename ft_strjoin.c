/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:05:50 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/11 11:52:26 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, char *src, size_t size);
void	*ft_memcpy(void *dest, void *src, size_t n);

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (s2)
	{
		return (char *)s1;;
	}
	
	return (char *)s1;
}