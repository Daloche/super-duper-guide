/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:48:09 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/06 12:08:00 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, void *src, size_t count)
{
	char	*strdest;
	char	*strsrc;
	size_t	i;
	char	temp;

	i = 0;
	strdest = (char *) dest;
	strsrc = (char *) src;
	while (i < count)
	{
		temp = strsrc[i];
		strdest[i] = temp;
		i++;
	}
	return ((void *) strdest);
}
