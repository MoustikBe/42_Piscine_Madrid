#ifndef LIB_H
#define LIB_H
#define DEFAULTMAP "map.map"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Filereader Filereader
struct Filereader
{
	int	fd;
	char	*line;
	bool	hasNext;
	char	*filename;

}; Filereader

typedef struct Map Map
struct Map
{
	char	*lines;
	char	*height;
	char	*obstacle;
	char	*free;
	int 	*length;
}; Map

typedef struct Coord Coord;
struct Coord
{
	int x;
	int y;
};

void	ft_putchar(char c);

void	ft_print(char matrix[][5], int i, int j);

int minlen(int a, int b, int c);

void calculerCoins(int br_x, int br_y, int maxSquareSize, Coord *tl, Coord *tr, Coord *bl, Coord *br);

void printMatrix(char matrix[][5], int x, int y, Coord tl, Coord tr, Coord bl, Coord br);

void convertMatrix(char matrix[][5], int rows, int cols);

void convertMatrixSortie(char matrix[][5], int rows, int cols);

void maxSq1(char matrix[][5], int rows, int cols, int ***temp);

void maxSq2(char matrix[][5], int rows, int cols, int **temp, int *maxSquareSize, Coord *br);

void maxSq3(char matrix[][5], int rows, int cols, int **temp, int *maxSquareSize, Coord *br);

void maxSq4(char matrix[][5], int rows, int cols, int **temp, int *maxSquareSize, Coord *br);

void freeMemory(int **temp, int rows);

int maxSq(char matrix[][5], int rows, int cols);

struct Carte attribuer(const char *carte, int largeur, int hauteur);

#endif 
