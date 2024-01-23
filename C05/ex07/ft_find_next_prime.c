/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:36:36 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/22 17:47:40 by misaac-c         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	count;

	if (nb <= 1)
		return (2);
	count = nb;
	if (nb == 2147483647)
	{
		return (2147483647);
	}
	while (!ft_is_prime(count))
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
	ft_find_next_prime(5511451);
	printf("%d\n", ft_find_next_prime(2147483647));
	return 0;
}
*/
