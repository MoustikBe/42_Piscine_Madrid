#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char matrix[100][100];
typedef struct Coordonnes Coordonnes;
struct Coordonnes
{
	int x;
	int y;
};

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

void calculerCoins(int br_x, int br_y, int maxSquareSize, Coordonnes *tl, Coordonnes *tr, Coordonnes *bl, Coordonnes *br) 
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

void printMatrix(char matrix[][5], int x, int y, Coordonnes tl, Coordonnes tr, Coordonnes bl, Coordonnes br) {
    int i = 0;
    while (i < y) {
        int j = 0;
        while (j < x) {
            if ((i >= tl.x && i <= bl.x) && (j >= tl.y && j <= br.y)) {
                if (matrix[i][j] == 'o') {
                    ft_putchar('x');
                } else {
                    ft_putchar(matrix[i][j]);
                }
            } else {
                ft_putchar(matrix[i][j]);  // Imprimer la valeur originale
            }
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

void convertMatrix(char matrix[][5], int rows, int cols) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            if (matrix[i][j] == 'o') {
                matrix[i][j] = '1';
            } else if (matrix[i][j] == '.') {
                matrix[i][j] = '0';
            }
            j++;
        }
        i++;
    }
} 

void convertMatrixSortie(char matrix[][5], int rows, int cols) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            if (matrix[i][j] == '1') {
                matrix[i][j] = 'o';
            } else if (matrix[i][j] == '0') {
                matrix[i][j] = '.';
            }
            j++;
        }
        i++;
    }
} 



    
int maxSq(char matrix[][5], int rows, int cols) {
    if (rows == 0 || cols == 0) 
	{
        return 0;
	}
    convertMatrix(matrix, rows, cols);
    int **temp = (int **)malloc(rows * sizeof(int *));
    int i = 0;

    while (i < rows) {
        temp[i] = (int *)malloc(cols * sizeof(int));
        i++;
    }

    int maxSquareSize = 0;
    Coordonnes br = {0, 0};
    i = 0;
    while (i < rows) {
        temp[i][0] = matrix[i][0] - '0';

        if (temp[i][0] > maxSquareSize) {
            maxSquareSize = temp[i][0];
            br.x = i;
            br.y = 0;
        }

        i++;
    }

    i = 0;
    while (i < cols) {
        temp[0][i] = matrix[0][i] - '0';

        if (temp[0][i] > maxSquareSize) {
            maxSquareSize = temp[0][i];
            br.x = 0;
            br.y = i;
        }

        i++;
    }

    i = 0;
    while (i < rows)
    {
        int j = 0;
        while (j < cols) {
            if (matrix[i][j] == '1') {
                if (i > 0 && j > 0) {
                    temp[i][j] = minlen(temp[i - 1][j], temp[i][j - 1], temp[i - 1][j - 1]) + 1;
                } else {
                    temp[i][j] = 1; // Gérer le cas où i-1 ou j-1 est négatif
                }

                if (temp[i][j] > maxSquareSize) {
                    maxSquareSize = temp[i][j];
                    br.x = i;
                    br.y = j;
                }
            } else {
                temp[i][j] = 0;
            }

            j++;
        }

        i++;
    }

    i = 0;
    while (i < rows) 
	{
        free(temp[i]);
        i++;
    }

    free(temp);

	Coordonnes tl, tr, bl;
    calculerCoins(br.x, br.y, maxSquareSize, &tl, &tr, &bl, &br);
    convertMatrixSortie(matrix, rows, cols);
	printMatrix(matrix, cols, rows, tl, tr, bl, br);
    return (maxSquareSize);
	
}


// PARTIE AJOUT POUR LA LECTURE DU FICHIER 
void printMatrix2(int cols, int rows, char matrix[][cols], int obstacles[][2], int obstacle_count) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            // Vérifiez si la position actuelle est un obstacle
            int isObstacle = 0;
            int k = 0;
            while (k < obstacle_count) {
                if (obstacles[k][0] == i && obstacles[k][1] == j) {
                    isObstacle = 1;
                    break;
                }
                k++;
            }

            // Imprime 'O' si c'est un obstacle, sinon '.'

            j++;
        }
        i++;
    }
}

int open_file(char *file) {
    return (open(file, O_RDONLY));
}

void read_file(int fd) {
    char buffer;
    int rows = 0;
    int cols = 0;
    int stop = 0;
    int current_row = 0;
    int current_col = 0;

    // Liste pour stocker les coordonnées des obstacles
    int obstacles[100][2];
    int obstacle_count = 0;

    while (read(fd, &buffer, 1) > 0) {
        if (stop == 0) {
            cols++;
        }

        if (buffer == 'O') {
            // Stocke les coordonnées de l'obstacle
            obstacles[obstacle_count][0] = current_row;
            obstacles[obstacle_count][1] = current_col;
            obstacle_count++;
        }

        if (buffer == '\n') {
            stop = 1;
            rows++;
            current_row++;
            current_col = 0;
        } else {
            current_col++;
        }
    }

    cols = cols - 1;

    // Affiche le nombre de colonnes et de lignes


    int i = 0;
    while (i < obstacle_count) {
        i++;
    }
    close(fd);
    printMatrix2(cols, rows, matrix, obstacles, obstacle_count);
}
// FIN DE LA PARTIE 

int main(int argc, char *argv[])
{
    int fd;
    fd = open_file(argv[1]);

    if (fd != -1)
        read_file(fd);
    else
        write(1, "Error2\n", 6);

    char matrix[][5] =
        {
            ".o..o",
            "...oo",
            "o..oo",
            "....o",
            "o...."};

    int rows = 5;
    int cols = 5;

    // Coordonnes tl, tr, bl, br;

    int result = maxSq(matrix, rows, cols);

    // calculerCoins(br.x, br.y, result, &tl, &tr, &bl, &br);

    return 0;
}
