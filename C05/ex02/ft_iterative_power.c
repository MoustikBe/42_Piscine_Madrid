/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:54:29 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/21 00:34:54 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h> 
int main(void)
{
	int result; 
	result = ft_iterative_power(0, 0);
	printf("%d\n", result);
}
*/
