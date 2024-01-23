/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:13:16 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/24 00:12:43 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count])
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "Tesstr"; 
	char str2[] = "Tefefefstt"; 
	printf("%d", ft_strcmp(str1, str2));
	return (0);


}
*/
