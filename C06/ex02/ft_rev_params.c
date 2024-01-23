/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:25:15 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/23 21:12:33 by misaac-c         ###   ########.fr       */
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
	int	count2;

	count = 1;
	count2 = argc;
	while (count < argc)
	{
		ft_print_params(argv[count2 - 1]);
		count2--;
		count++;
		ft_putchar('\n');
	}
}
