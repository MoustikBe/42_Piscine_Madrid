/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:56:14 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/20 18:48:44 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
#include <stdio.h>
int main(void) 
{
	char *str;
   	int resultat; 

	str = "tst";
	resultat = ft_strlen(str);	
	printf("%d\n", resultat);
	return 0;

}
*/
