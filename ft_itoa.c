/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medali <medali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:39:04 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/13 15:11:55 by medali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *string);
void	*ft_memset(void *dest, int c, size_t count);
void	*ft_memcpy(void *dest, void *src, size_t n);
char	*ft_strdup(char *source);

int	count_nb_elem(int n)
{
	int	nb_elem;

	nb_elem = 0;
	while (n > 0)
	{
		nb_elem++;
		n /= 10;
	}
	return (nb_elem);
}

void	reverse(char *str)
{
	char	temp;
	int		debut;
	int		fin;

	debut = 0;
	fin = ft_strlen(str) - 1;
	while (debut < fin)
	{
		temp = str[debut];
		str[debut] = str[fin];
		str[fin] = temp;
		debut++;
		fin--;
	}
}

char	*cas_spe(int n)
{
	char	*spe;

	spe = malloc(sizeof(char) * 12);
	if (n == 0)
	{
		spe[0] = '0';
		spe[1] = '\0';
	}
	else if (n == -2147483648)
	{
		spe[0] = '-';
		spe[1] = '2';
		spe[2] = '1';
		spe[3] = '4';
		spe[4] = '7';
		spe[5] = '4';
		spe[6] = '8';
		spe[7] = '3';
		spe[8] = '6';
		spe[9] = '4';
		spe[10] = '8';
		spe[11] = '\0';
	}
	return (spe);
}

int	is_neg(int *n)
{
	if (*n < 0)
	{
		*n = *n * -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*nb_str;
	int		len_n;
	int		isneg;

	if (n == 0 || n == -2147483648)
		return (cas_spe(n));
	isneg = is_neg(&n);
	len_n = 0;
	nb_str = malloc(sizeof(char *) * count_nb_elem(n) + 2);
	while (n > 0)
	{
		nb_str[len_n] = (n % 10) + '0';
		len_n++;
		n /= 10;
	}
	if (isneg == 1)
	{
		nb_str[len_n++] = '-';
	}
	nb_str[len_n] = '\0';
	reverse(nb_str);
	return (nb_str);
}
