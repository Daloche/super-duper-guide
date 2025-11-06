/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:54:16 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/05 12:52:11 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *string);

char	*ft_strrchr(char *string, int searchedChar)
{
	int	len_string;

	len_string = ft_strlen(string);
	while (len_string >= 0)
	{
		if (string[len_string] == searchedChar)
		{
			return (&string[len_string]);
		}
		len_string--;
	}
	return (NULL);
}
