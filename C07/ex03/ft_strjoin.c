/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:07:28 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/30 17:27:53 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_totalen(int size, char **strs, char *sep)
{
	int	j;
	int	len;

	j = 0;
	len = 0;
	if (size == 0)
		return (0);
	while (j < size)
	{
		len = len + str_len(strs[j++]);
	}
	len = len + (str_len(sep) * (size - 1));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count_l;
	int		count_c;
	int		index;
	int		len;
	char	*dest;

	count_l = 0;
	count_c = 0;
	index = 0;
	len = ft_totalen(size, strs, sep);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while (count_l < size)
	{
		while (strs[count_l][count_c] != '\0')
			dest[index++] = strs[count_l][count_c++];
		count_c = 0;
		count_l++;
		while (sep[count_c] != '\0' && count_l < size)
			dest[index++] = sep[count_c++];
		count_c = 0;
	}
	dest[index] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main() {
    char *strings[] = {"Hello", "world", "of", "programming"};
    char *separator = " dwaawdaw";

    char *result = ft_strjoin(sizeof(strings) 
	/ sizeof(strings[0]), strings, separator);

    if (result != NULL) {
        printf("Result: %s\n", result);

        // N'oubliez pas de libérer la mémoire allouée pour le résultat
        free(result);
    } else {
        printf("Memory allocation error.\n");
    }

    return 0;
}
*/
