/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:07:54 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 22:51:12 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*ft_get_num(char *str, int size)
{
	char	*num;

	num = ft_strndup(str, size);
	return (num);
}

int	ft_is_sign(char c, int *negs)
{
	if (c == '+')
		return (1);
	else if (c == '-')
	{
		(*negs) *= -1;
		return (1);
	}
	return (0);
}

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_atoi(char *str)
{
	int	i;
	int	negs;
	int	j;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	negs = 1;
	while (ft_is_sign(str[i], &negs))
		i++;
	if (negs < 0)
		return (0);
	j = i;
	while (ft_is_number(str[i]))
		i++;
	if (str[i] == '.')
		return (0);
	if (j != i)
	{
		return (ft_get_num(str + j, i - j));
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
