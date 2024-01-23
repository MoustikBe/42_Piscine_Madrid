/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:11:55 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/30 20:10:44 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN.H
# define FT_BOOLEAN.H

# include <unistd.h>
# define EVEN(nbr) ((nbr) % 2 == 0)
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments"
# define ODD_MSG "I have an odd number of argumebts"
# define SUCCESS TRUE
typedef int t_bool

#endif

#include "ft_boolean.h"
void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
		return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
