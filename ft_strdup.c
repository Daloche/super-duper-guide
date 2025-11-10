/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:45:57 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 13:43:58 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(char *string);
void	*ft_memcpy(void *dest, void *src, size_t n);

char	*ft_strdup(char *source)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * ft_strlen(source));
	ft_memcpy(dup, source, sizeof(char) * ft_strlen(source));
	return (dup);
}
