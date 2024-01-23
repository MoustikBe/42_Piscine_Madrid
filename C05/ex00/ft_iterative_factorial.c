/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoriel.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:39:55 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/20 23:51:13 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		result *= nb;
		nb = nb - 1;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	int resu; 
	resu = ft_iterative_factoriel(5);
	printf("%d\n", resu);
}
*/
