/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:26:52 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/05 12:49:19 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int		i;
	int		j;
	size_t	h;

	i = 0;
	j = 0;
	h = 0;
	while ((str[i] && to_find[j]) && h < n)
	{
		if (str[i] == to_find[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
		i++;
		h++;
	}
	if (to_find[j] == '\0')
	{
		return (str + (i - j));
	}
	return (NULL);
}
