/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:11:22 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/30 21:01:46 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	*tableau;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	count = max - min;
	tableau = (int *)malloc(count * sizeof(int));
	if (tableau == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = tableau;
	count = 0;
	while (min < max)
	{
		tableau[count] = min;
		count++;
		min++;
	}
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = -2;
	max = 12;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
