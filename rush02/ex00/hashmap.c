/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:29:24 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 23:30:06 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "headers.h"

t_item	*ft_ini_item(t_item *item, t_ulong key, char *value)
{
	item->key = key;
	item->value = value;
	item->next = NULL;
	return (item);
}

t_item	**ft_add_hash_item(t_item **hash_map, char *str, int *pos)
{
	t_item	*new_item;
	t_item	*item;
	char	*strnbr;
	int		index;

	strnbr = ft_get_nbr(str, pos);
	index = ft_nbr_hash(strnbr) % HASH_SIZE;
	new_item = (t_item *) malloc(sizeof(t_item));
	if (!new_item)
	{
		return (0);
	}
	new_item = ft_ini_item(new_item, ft_nbr_hash(strnbr),
			ft_get_value(str, pos));
	if (hash_map[index] != NULL)
	{
		item = hash_map[index];
		while (item->next != NULL)
			item = item->next;
		item->next = new_item;
	}
	else
		hash_map[index] = new_item;
	return (hash_map);
}

t_item	**ft_init_hashmap(void)
{
	t_item	**hash_map;
	int		i;

	hash_map = (t_item **) malloc(HASH_SIZE * sizeof(t_item *));
	if (!hash_map)
		return (0);
	i = 0;
	while (i < HASH_SIZE)
	{
		hash_map[i] = NULL;
		i++;
	}
	return (hash_map);
}
/* void	ft_print_hash(t_item	**hash_map)
{
	int	i;
	t_item	*item;

	i = 0;
	while (i < HASH_SIZE)
	{
		if (hash_map[i] != NULL)
		{
			item = hash_map[i];
			while (item->next != NULL)
			{
				item = item->next;
			}
		}
		i++;
	}
} */

char	*ft_read_dict(char *filename)
{
	int		fd;
	int		bytes;
	char	c;
	char	*f_str;
	int		i;

	bytes = ft_read_bytes(filename);
	if (bytes == -1)
		return (0);
	f_str = (char *) malloc(bytes + 1);
	if (!f_str)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		f_str[i] = c;
		i++;
	}
	f_str[i] = '\0';
	close(fd);
	return (f_str);
}

t_item	**ft_process_dict(char *filename)
{
	char	*f_str;
	t_item	**hash_map;
	int		pos;

	f_str = ft_read_dict(filename);
	if (!f_str)
		return (0);
	hash_map = ft_init_hashmap();
	if (!hash_map)
		return (0);
	pos = 0;
	while (f_str[pos])
	{
		hash_map = ft_add_hash_item(hash_map, f_str, &pos);
		if (!hash_map)
			return (0);
	}
	return (hash_map);
}
