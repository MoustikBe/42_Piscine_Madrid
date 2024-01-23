/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 00:35:26 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/21 21:07:08 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
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
	return (nb * (ft_recursive_power(nb, power - 1)));
}

/*
#include <stdio.h> 
int main(void)
{
	int resu;
	resu = ft_recursive_power(7,4);
	printf("%d\n", resu);
}

*/
