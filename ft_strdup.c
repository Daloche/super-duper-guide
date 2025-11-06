/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:59:18 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/06 10:05:18 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(char *string);

char	*ft_strdup(char *source)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * ft_strlen(source));
	i = 0;
	while (source[i])
	{
		dup[i] = source[i];
		i++;
	}
	return (dup);
}
