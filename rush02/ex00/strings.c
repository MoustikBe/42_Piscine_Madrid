/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:25:00 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 21:42:03 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	if (src[i] != '\0')
	{
		while (src[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		dest[j] = '\0';
	}
	return (dest);
}

char	*ft_strndup(char *src, int nb)
{
	char	*new_str;

	new_str = (char *) malloc(nb + 1);
	if (!new_str)
	{
		errno = ENOENT;
		return (new_str);
	}
	return (ft_strncpy(new_str, src, nb));
}
