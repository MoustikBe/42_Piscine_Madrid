/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 04:58:47 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 22:34:58 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_process_nbr(t_item **hash_map, char *nbr)
{
	char	(*ar)[4];
	int		partes;
	int		rw;

	rw = 1;
	if (!ft_strcmp(nbr, "0"))
		ft_find_value(hash_map, nbr, 1);
	ar = ft_read_number(nbr, &partes);
	ft_str_numbers(hash_map, ar, (partes - 1), rw);
	return (1);
}

int	ft_handle_1_arg(t_item **hash_map, char *arg)
{
	char	*nbr;

	nbr = NULL;
	nbr = ft_atoi(arg);
	if (!nbr)
		return (ft_ret_error());
	hash_map = ft_process_dict(DEFAULT_DICT);
	if (!hash_map)
		return (ft_ret_dict_error(nbr));
	if (!ft_process_nbr(hash_map, nbr))
		return (ft_ret_dict_error(nbr));
	return (0);
}

int	ft_handle_2_args(t_item **hash_map, char *filename, char *arg)
{
	char	*nbr;

	nbr = NULL;
	nbr = ft_atoi(arg);
	if (!nbr)
		return (ft_ret_error());
	hash_map = ft_process_dict(filename);
	if (!hash_map)
		return (ft_ret_dict_error(nbr));
	if (!ft_process_nbr(hash_map, nbr))
		return (ft_ret_dict_error(nbr));
	return (0);
}

int	main(int nargs, char **args)
{
	t_item	**hash_map;

	if (nargs < 2 || nargs > 3)
		return (ft_ret_error());
	hash_map = NULL;
	if (nargs == 2)
		return (ft_handle_1_arg(hash_map, args[1]));
	else
	{
		return (ft_handle_2_args(hash_map, args[1], args[2]));
	}
	return (0);
}
