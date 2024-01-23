/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:58:13 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/18 18:22:40 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
#include <stdio.h>
int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    printf("Tableau original : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }

    ft_rev_int_tab(tableau, taille);

    printf("\nTableau inversé : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
*/
