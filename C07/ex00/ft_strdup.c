/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:00:03 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/29 22:10:22 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		count;

	length = ft_strlen(src);
	count = 0;
	dest = malloc((length + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*
int main(void)
{
	char test[] = "test"; 
	printf("%s\n", ft_strdup(test));
}
*/
