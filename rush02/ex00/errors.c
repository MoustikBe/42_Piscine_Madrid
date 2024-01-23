/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:25:05 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 20:25:28 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_ret_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	ft_ret_dict_error(char *nbr)
{
	write(1, "Dict Error\n", 12);
	free(nbr);
	return (0);
}
