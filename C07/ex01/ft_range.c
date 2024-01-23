/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:11:22 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/30 01:37:12 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	tab;
	int	*tableau;

	tab = max - min;
	count = 0;
	tableau = (int *)malloc(tab * sizeof(int));
	if (tableau == NULL)
	{
		return (NULL);
	}
	if (min >= max)
	{
		return (NULL);
	}
	while (min <= max)
	{
		tableau[count] = min;
		count++;
		min++;
	}
	return (tableau);
}

/*
#include <stdio.h>
int main(void)
{
    int min = -8;
    int max = -1;
    
    int *result = ft_range(min, max);

    // Affichage du contenu du tableau
    for (int i = 0; i < max - min + 1; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Libération de la mémoire allouée
    free(result);

    return 0;
}
*/
