/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:37:47 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/22 17:56:32 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (count <= nb / 2)
	{
		if (nb % count == 0)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	int result;
	result = ft_is_prime(5);
	printf("%d\n", result);
}
*/
