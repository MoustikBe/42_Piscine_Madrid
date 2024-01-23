/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conds.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:53:09 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/19 21:54:09 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int cr_matrix();
void conditions_cols(){
    char **ArgS;
    char *str;
    int i;
    int j;
    char matrix [i][j];
    int cols;
    
    *str = **ArgS;
    cols = 0;
    while(cols <= 6){
        if (str[cols] == '1')
            matrix[1][j]='4';
        else if (str[cols + 8] == '1')
            matrix[4][j]='4';
        else if ((str[cols] == '3') && (str[cols + 8] == '2'))
            matrix[3][j] = '4';
        else if ((str[cols] == '2') && (str[cols + 8] == '3'))
            matrix[2][j] = '4';
        else if (str[cols] == '4'){
            matrix[1][j] = '1';
            matrix[2][j] = '2';
            matrix[3][j] = '3';
        }
        else if (str[cols + 8] == '4'){
            matrix[2][j] = '3';
            matrix[3][j] = '2';
            matrix[4][j] = '1';
        }
        else if ((str[cols] == '2') && (str[cols + 8] == '1'))
            matrix[1][j] = '3';
        else if ((str[cols] == '1') && (str[cols + 8] == '2'))
            matrix[4][j] = '3';
        cols++;
    }
}

void conditions_rows(){
    char **ArgS;
    char *str;
    int i;
    int j;
    char matrix [i][j];
    int rows;

    *str = **ArgS;
    rows = 16;
    while(rows <= 22){
        if (str[rows] == '1')
            matrix[i][1]='4';
        else if (str[rows + 8] == '1')
            matrix[i][4]='4';
        else if ((str[rows] == '3') && (str[rows + 8] == '2'))
            matrix[i][3] = '4';
        else if ((str[rows] == '2') && (str[rows + 8] == '3'))
            matrix[i][2] = '4';
        else if (str[rows] == '4'){
            matrix[i][1] = '1';
            matrix[i][2] = '2';
            matrix[i][3] = '3';
        }
        else if (str[rows + 8] == '4')
        {
            matrix[i][2] = '3';
            matrix[i][3] = '2';
            matrix[i][4] = '1';
        }
        else if ((str[rows] == '2') && (str[rows + 8] == '1'))
            matrix[i][1] = '3';
        else if ((str[rows] == '1') && (str[rows + 8] == '2'))
            matrix[i][4] = '3';
        rows++;
    }
}
