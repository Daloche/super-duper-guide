/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:16:57 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 13:44:31 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *string);

int	ft_strncmp(char *first, char *second, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		if (first[i] < second[i])
		{
			return (1);
		}
		else if ((first[i] > second[i]))
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
