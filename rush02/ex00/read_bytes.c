/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_bytes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:35:42 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 21:38:45 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_read_bytes(char *filename)
{
	char	c;
	int		fd;
	int		bytes;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	bytes = 0;
	while (read(fd, &c, 1) > 0)
		bytes++;
	close(fd);
	return (bytes);
}
