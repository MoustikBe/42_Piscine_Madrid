/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:34:48 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/20 18:59:57 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	process_signs(char *str, int *count, int *sou_ctn)
{
	while (str[*count] == '-' || str[*count] == '+')
	{
		if (str[*count] == '-')
		{
			(*sou_ctn)++;
		}
		(*count)++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	count;
	int	result;
	int	sou_ctn;

	result = 0;
	sou_ctn = 0;
	count = 0;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\r'
		|| str[count] == '\n' || str[count] == '\v' || str[count] == '\f')
	{
		count++;
	}
	process_signs(str, &count, &sou_ctn);
	while (str[count] >= '0' && str[count] <= '9' && str[count] != '\0')
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	if (sou_ctn % 2 != 0)
	{
		result = -result;
	}
	return (result);
}	

/*
#include <stdio.h>
int main() {
    char str[] = "123"; 
    int result = ft_atoi(str);

    printf("Chaîne de caractères : %s\n", str);
    printf("Entier correspondant : %d\n", result);

    return 0;
}
*/
