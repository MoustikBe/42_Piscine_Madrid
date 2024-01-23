/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:44:48 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/26 21:43:21 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <errno.h>
# include "types.h"
# define DEFAULT_DICT "numbers.dict"
# define HASH_SIZE 16

char	(*ft_get_arr_nbr(char *nbr, int sections, int level_nbr))[4];
char	(*ft_read_number(char *nbr, int *p))[4];
char	*ft_nbr_by_level(char n, int level);

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_str_is_numeric(char *str);
char	*ft_strndup(char *src, int nb);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		ft_ret_error(void);
int		ft_ret_dict_error(char *nbr);

t_ulong	ft_nbr_hash(char *nbr);

int		ft_read_bytes(char *filename);

t_item	**ft_add_hash_item(t_item **hash_map, char *str, int *pos);
t_item	**ft_init_hashmap(void);
char	*ft_read_dict(char *filename);
t_item	**ft_process_dict(char *filename);

char	*ft_get_nbr(char *str, int *start);
char	*ft_get_value(char *str, int *start);

int		ft_find_value(t_item **hash_map, char *str, int print);
int		print_number(t_item **hash_map, char *num, int rw);
int		ft_str_numbers_r(t_item **hash_map, char (*ar)[4], int niv, int rw);
int		ft_str_numbers(t_item **hash_map, char (*ar)[4], int niv, int rw);

char	*ft_atoi(char *str);

#endif
