/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:38:16 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/06 09:57:25 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_tiret(char *str, int *i, int nb_tiret, int *nbr_plus)
{
	while (((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		|| (str[*i] && !(str[*i] >= '0' && str[*i] <= '9'))
		|| str[*i] == '+')
	{
		if ((!(str[*i] >= 9 && str[*i] <= 13) && str[*i] != ' ')
			&& (!(str[*i] >= '0' && str[*i] <= '9') && str[*i] != '-')
			&& str[*i] != '+')
			return (0);
		else if (str[*i] == '-')
			nb_tiret++;
		else if (str[*i] == '+')
		{
			*nbr_plus+=1;
		}
		
		
		*i+=1;
	}
	return (nb_tiret);
}

int	ft_atoi(char *str)
{
	int	nb_str;
	int	nb_tiret;
	int nb_plus;
	int	i;

	i = 0;
	nb_tiret = 0;
	nb_plus = 0;
	nb_tiret += count_tiret(str, &i, nb_tiret, &nb_plus);
	if (nb_plus > 1 || nb_tiret > 1)
	{
		return 0;
	}
	nb_str = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb_str = ((nb_str * 10) + (str[i] - '0'));
		i++;
	}
	if (nb_tiret % 2 == 1)
		nb_str *= -1;
	return (nb_str);
}

