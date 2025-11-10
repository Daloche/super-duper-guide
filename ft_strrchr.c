/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:54:16 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/11 00:29:40 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *string);

char	*ft_strrchr(char *string, int searchedChar)
{
	size_t	len_string;

	len_string = ft_strlen(string);
	while (len_string > 0)
	{
		if (string[len_string] == searchedChar)
		{
			break;
		}
		len_string--;
	}
	if(string[len_string] == searchedChar)
		return (string + len_string);
	return (NULL);
}
