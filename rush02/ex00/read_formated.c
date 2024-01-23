/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_formated.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:34:07 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 23:30:21 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*ft_get_nbr(char *str, int *start)
{
	int		end;
	char	*strnbr;

	while (str[*start] == '\n')
		(*start)++;
	end = *start;
	while (str[end] >= '0' && str[end] <= '9')
		end++;
	strnbr = ft_strndup(str + *start, end - *start);
	*start = end;
	return (strnbr);
}

char	*ft_get_value(char *str, int *start)
{
	int		end;
	char	*value;

	while (str[*start] == ' ' || str[*start] == ':')
		(*start)++;
	end = *start;
	while (str[end] >= ' ' && str[end] <= '~')
		end++;
	value = ft_strndup(str + *start, end - *start);
	*start = end;
	return (value);
}
