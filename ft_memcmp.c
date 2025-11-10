/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:39:52 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 10:19:25 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(void *pointer1, void *pointer2, size_t size)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	i = 0;
	str1 = (const char *) pointer1;
	str2 = (const char *) pointer2;
	while (i < size)
	{
		if ((unsigned char)str1[i] > (unsigned char)str2[i])
		{
			return (1);
		}
		else if ((unsigned char)str1[i] < (unsigned char)str2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
