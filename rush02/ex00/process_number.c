/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:36:21 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 23:29:42 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "headers.h"

int	ft_find_value(t_item **hash_map, char *str, int print)
{
	t_ulong	hash;
	t_item	*item;
	int		index;

	hash = ft_nbr_hash(str);
	index = hash % HASH_SIZE;
	item = hash_map[index];
	if (item == NULL)
		return (-1);
	while (item->next != NULL && item->key != hash)
		item = item->next;
	if (item->key == hash && print == 1)
	{
		ft_putstr(item->value);
		ft_putchar(' ');
		return (1);
	}
	if (!str)
		free(str);
	return (-1);
}

char	*ft_form_number(char c1, char c2, char c3)
{
	char	*nbr;

	nbr = (char *) malloc(4);
	nbr[0] = c1;
	nbr[1] = c2;
	nbr[2] = c3;
	return (nbr);
}

int	print_number(t_item **hash_map, char *num, int rw)
{
	char	*numero;

	if (num[0] != '0' || num[1] != '0' || num[2] != '0')
	{
		if (num[0] > '0')
		{
			numero = ft_form_number(num[0], '\0', '\0');
			ft_find_value(hash_map, numero, rw);
			ft_find_value(hash_map, ft_nbr_by_level('1', 0), rw);
		}
		if (num[1] > '1')
			ft_find_value(hash_map, ft_nbr_by_level(num[1], -1), rw);
		if (num[1] == '1')
		{
			numero = ft_form_number(num[1], num[2], '\0');
			ft_find_value(hash_map, numero, rw);
		}
		else if (num[2] != '0')
		{
			numero = ft_form_number(num[2], '\0', '\0');
			ft_find_value(hash_map, numero, rw);
		}
	}
	return (1);
}

int	ft_str_numbers_r(t_item **hash_map, char (*ar)[4], int niv, int rw)
{
	char	*n;

	if (ar[niv][0] != '0' || ar[niv][1] != '0' || ar[niv][2] != '0')
	{
		print_number(hash_map, ar[niv], rw);
		if (niv > 0)
		{
			n = ft_nbr_by_level('1', niv);
			ft_find_value(hash_map, n, rw);
			ft_str_numbers_r(hash_map, ar, niv - 1, rw);
		}
	}
	else
		ft_str_numbers_r(hash_map, ar, niv - 1, rw);
	return (1);
}

int	ft_str_numbers(t_item **hash_map, char (*ar)[4], int niv, int rw)
{
	return (ft_str_numbers_r(hash_map, ar, niv, rw));
}
