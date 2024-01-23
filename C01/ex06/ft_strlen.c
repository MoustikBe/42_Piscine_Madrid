/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:44:10 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/18 18:33:41 by misaac-c         ###   ########.fr       */
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

	str = "testdwdwd";	
	resultat = ft_strlen(str); 
	printf("%d\n", resultat); 

}
*/
