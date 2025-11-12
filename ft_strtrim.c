/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:14:37 by medali            #+#    #+#             */
/*   Updated: 2025/11/12 09:48:12 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(char *string);
int		ft_strncmp(char *first, char *second, size_t length);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, char *src, size_t size);

int	is_char(char const *set, int c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*finlres;
	char	*resfin;

	i = 0;
	len = ft_strlen((char *) s1);
	finlres = (char *)s1;
	resfin = malloc(sizeof(char) * len);
	while (finlres[i] && is_char(set, finlres[i]))
	{
		i++;
	}
	while (len - 1 > i && is_char(set, finlres[len - 1]))
	{
		len--;
	}
	resfin = ft_substr(finlres, i, len - i);
	return (resfin);
}
