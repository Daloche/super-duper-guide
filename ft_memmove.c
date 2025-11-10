/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:48:09 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 09:46:49 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, void *src, size_t n);

void	*ft_memmove(void *dest, void *src, size_t C)
{
	char	*strdest;
	char	*strsrc;
	char	temp[C];

	strdest = (char *) dest;
	strsrc = (char *) src;
	ft_memcpy(temp, strsrc, C);
	ft_memcpy(strdest, temp, C);
	return ((void *) strdest);
}
