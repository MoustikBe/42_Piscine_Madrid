/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:24:48 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/23 20:25:47 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *argv)
{
	int	count;

	count = 0;
	while (argv[count] != '\0')
	{
		ft_putchar(argv[count]);
		count++;
	}
}

int	main(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		ft_print_params(argv[count]);
		count++;
		ft_putchar('\n');
	}
}
