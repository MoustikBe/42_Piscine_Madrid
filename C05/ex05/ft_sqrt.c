/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:01:56 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/22 19:36:24 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (count <= nb / 2 && count <= 46341)
	{
		if (count * count == nb)
		{
			return (count);
		}
		count++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int result;
	result = ft_sqrt(214281);
	printf("%d\n", result); 
}
*/
