/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croussea <croussea@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:11:13 by croussea          #+#    #+#             */
/*   Updated: 2023/11/29 18:37:47 by croussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib.h"

void	printMatrix(char matrix[][5], int x, int y, Coord tl, Coord tr, Coord bl, Coord br)
{
	int	i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i >= tl.x && i <= bl.x) && (j >= tl.y && j <= br.y))
			{
				if (matrix[i][j] == 'o')
				{
					ft_putchar('x');
                }
				else
				{
					ft_putchar(matrix[i][j]);
				}
			}
			else
			{
				ft_putchar(matrix[i][j]);
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	convertMatrix(char matrix[][5], int rows, int cols)
{
	int i;
	
	i = 0;
    while (i < rows)
	{
		int j

		j = 0;
		while (j < cols)
		{
			if (matrix[i][j] == 'o')
			{
				matrix[i][j] = '1';
			}
			else if (matrix[i][j] == '.')
			{
				matrix[i][j] = '0';
			}
			j++;
		}
		i++;
	}
}

void	convertMatrixSortie(char matrix[][5], int rows, int cols) 
{
    int	i;

    i = 0;
    while (i < rows) 
	{
		int j;
		j = 0;
		while (j < cols)
		{
			if (matrix[i][j] == '1')
			{
				matrix[i][j] = 'o';
			}
			else if (matrix[i][j] == '0')
			{
				matrix[i][j] = '.';
			}
			j++;
		}
		i++;
	}
}

// Fonction principale
int	maxSq(char matrix[][5], int rows, int cols) 
{
    int	**temp;

    maxSq1(matrix, rows, cols, &temp);
    int	maxSquareSize;
	
	maxSquareSize = 0;
    Coord br = {0, 0};

    maxSq2(matrix, rows, cols, temp, &maxSquareSize, &br);
    maxSq3(matrix, rows, cols, temp, &maxSquareSize, &br);
    maxSq4(matrix, rows, cols, temp, &maxSquareSize, &br);

    freeMemory(temp, rows);

    Coord tl, tr, bl;
    calculerCoins(br.x, br.y, maxSquareSize, &tl, &tr, &bl, &br);
    convertMatrixSortie(matrix, rows, cols);
    printMatrix(matrix, cols, rows, tl, tr, bl, br);

    return (maxSquareSize);
}


int main()
{
    char matrix[][5] =
        {
            ".o..o",
            "...oo",
            "o..oo",
            "....o",
            "o...."
		};

    int rows

	rows = 5;
    int cols 

	cols = 5;
	int	result;

   	results	= maxSq(matrix, rows, cols);

    return (0);
}
