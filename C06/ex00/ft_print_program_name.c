/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:34:07 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/24 21:49:48 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_file_name(char *argv)
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
	if (argc < 0)
	{
		print_file_name(argv[0]);
		ft_putchar('\n');
	}
	else
	{
		print_file_name(argv[0]);
		ft_putchar('\n');
	}
}
