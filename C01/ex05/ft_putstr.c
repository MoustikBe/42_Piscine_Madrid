/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:49:32 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/11 22:12:35 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0' )
	{
		put_char(str[count]);
		count++;
	}
}
