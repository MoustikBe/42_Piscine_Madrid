/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:54:00 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/20 23:54:06 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main(void)
{
	int resu; 
	resu = ft_recursive_factorial(5);
	printf("%d\n", resu);
}
*/
