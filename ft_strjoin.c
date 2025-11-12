/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:05:50 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/11 12:39:28 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, char *src, size_t size);
void	*ft_memcpy(void *dest, void *src, size_t n);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*finalstring;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (s1 == NULL)
		return ((char *) s2);
	else if (s2 == NULL)
		return ((char *) s1);
	finalstring = malloc((sizeof(char) * (i + j)) + 1);
	ft_memcpy(finalstring, (char *)s1, i);
	ft_memcpy(finalstring + i, (char *)s2, j);
	finalstring[i + j] = '\0';
	return (finalstring);
}
