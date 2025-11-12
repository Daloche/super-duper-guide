/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:39:04 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/12 16:39:27 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *string);
void	*ft_memset(void *dest, int c, size_t count);

int count_nb_elem(int n)
{
	int nb_elem;

	nb_elem = 0;
	while (n > 0)
	{
		nb_elem++;
		n /= 10;
	}
	return (nb_elem);
}

void reverse(char *str)
{
    char temp;
    int debut = 0;
    int fin = ft_strlen(str) - 1;
    while (debut < fin)
    {
        temp = str[debut];
        str[debut] = str[fin];
        str[fin] = temp;
        debut++;
        fin--;
    }
}

char *ft_itoa(int n)
{
	char *nb_str = malloc(count_nb_elem(n) + 1);
	int isneg = 0;
	if (n < 0)
	{
		isneg = 1;
		n *= -1;
	}
	int i = 0;
	while (n > 0)
	{
		nb_str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	nb_str[i] = '\0';
	reverse(nb_str);
	return(nb_str);
}