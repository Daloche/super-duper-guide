/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:16:57 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/06 11:46:46 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *string);

int	ft_strncmp(char *first, char *second, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length && (first[i] || second[i]))
	{
		if (first[i] != second[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
