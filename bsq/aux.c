#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib.h"



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char matrix[][5], int i, int j)
{
		ft_putchar(matrix[i][j]);
}

int minlen(int a, int b, int c) {
    int min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    return min;
}

void calculerCoins(int br_x, int br_y, int maxSquareSize, Coord *tl, Coord *tr, Coord *bl, Coord *br) 
{
    // Assurez-vous que les coordonnées sont correctement mises à jour
    tl->x = br_x - maxSquareSize + 1;
    tl->y = br_y - maxSquareSize + 1;

    tr->x = br_x - maxSquareSize + 1;
    tr->y = br_y;

    bl->x = br_x;
    bl->y = br_y - maxSquareSize + 1;

    br->x = br_x;
    br->y = br_y;
}