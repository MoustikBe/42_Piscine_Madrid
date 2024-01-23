/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:28:37 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 21:28:44 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

t_ulong	ft_nbr_hash(char *nbr)
{
	t_ulong	hash;
	int		i;
	t_ulong	power;
	t_ulong	prime_const;

	hash = 0;
	i = 0;
	power = 1;
	prime_const = 7;
	while (nbr[i])
	{
		hash += (nbr[i] * power);
		power *= prime_const;
		i++;
	}
	return (hash);
}
