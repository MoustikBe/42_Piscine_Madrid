/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:52:57 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 21:16:48 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	(*ft_get_arr_nbr(char *nbr, int sections, int level_nbr))[4]
{
	char	(*arr_nbr)[4];
	int		i;
	int		j;

	arr_nbr = (char (*)[4]) malloc(sections * sizeof(char [4]));
	i = 0;
	level_nbr--;
	while (i < sections)
	{
		arr_nbr[i][3] = '\0';
		j = 2;
		while (j >= 0)
		{
			if (level_nbr >= 0)
				arr_nbr[i][j] = nbr[level_nbr];
			else
				arr_nbr[i][j] = '0';
			level_nbr--;
			j--;
		}
		i++;
	}
	return (arr_nbr);
}

char	(*ft_read_number(char *nbr, int *p))[4]
{
	int	sections;
	int	level_nbr;

	level_nbr = ft_strlen(nbr);
	sections = (level_nbr / 3) + 1;
	*p = sections;
	return (ft_get_arr_nbr(nbr, sections, level_nbr));
}

char	*ft_nbr_by_level(char n, int level)
{
	char	*nbr;
	int		n_zeros;
	int		i;

	if (level == 0)
		return ("100\0");
	i = 1;
	n_zeros = level * 3;
	if (level > 0)
		nbr = (char *) malloc((n_zeros + 1) * sizeof(char));
	else
		nbr = (char *) malloc(2 * sizeof(char));
	nbr[0] = n;
	if (level < 0)
		nbr[i++] = '0';
	else
	{
		while (i <= n_zeros)
			nbr[i++] = '0';
	}
	nbr[i] = '\0';
	return (nbr);
}
