/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:45:21 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/11 00:53:25 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *string, int searchedChar )
{
	int	i;

	i = 0;
	while (string[i])
	{
		if(string[i] == searchedChar)
			break;
		i += 1;
	}
	if (string[i] == searchedChar)
		return (string + i);
	return (NULL);
}
