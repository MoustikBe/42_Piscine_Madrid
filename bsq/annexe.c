#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib.h"

void maxSq1(char matrix[][5], int rows, int cols, int ***temp) {
    if (rows == 0 || cols == 0) {
        return;
    }

    convertMatrix(matrix, rows, cols);

    *temp = (int **)malloc(rows * sizeof(int *));
    int i = 0;
    while (i < rows) {
        (*temp)[i] = (int *)malloc(cols * sizeof(int));
        i++;
    }
}

// Partie 2 : Initialisation de la première colonne et recherche du maximum
void maxSq2(char matrix[][5], int rows, int cols, int **temp, int *maxSquareSize, Coord *br) {
    int i = 0;
    while (i < rows) {
        temp[i][0] = matrix[i][0] - '0';

        if (temp[i][0] > *maxSquareSize) {
            *maxSquareSize = temp[i][0];
            br->x = i;
            br->y = 0;
        }

        i++;
    }
}

// Partie 3 : Initialisation de la première ligne et recherche du maximum
void maxSq3(char matrix[][5], int rows, int cols, int **temp, int *maxSquareSize, Coord *br) {
    int i = 0;
    while (i < cols) {
        temp[0][i] = matrix[0][i] - '0';

        if (temp[0][i] > *maxSquareSize) {
            *maxSquareSize = temp[0][i];
            br->x = 0;
            br->y = i;
        }

        i++;
    }
}

// Partie 4 : Calcul de la taille maximale du carré et recherche du maximum
void maxSq4(char matrix[][5], int rows, int cols, int **temp, int *maxSquareSize, Coord *br) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            if (matrix[i][j] == '1') {
                if (i > 0 && j > 0) {
                    temp[i][j] = minlen(temp[i - 1][j], temp[i][j - 1], temp[i - 1][j - 1]) + 1;
                } else {
                    temp[i][j] = 1; // Gérer le cas où i-1 ou j-1 est négatif
                }

                if (temp[i][j] > *maxSquareSize) {
                    *maxSquareSize = temp[i][j];
                    br->x = i;
                    br->y = j;
                }
            } else {
                temp[i][j] = 0;
            }

            j++;
        }

        i++;
    }
}

// Partie 5 : Libération de la mémoire
void freeMemory(int **temp, int rows) {
    int i = 0;
    while (i < rows) {
        free(temp[i]);
        i++;
    }
    free(temp);
}
