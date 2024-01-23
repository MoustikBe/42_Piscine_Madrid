/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaza-ca <gtaza-ca@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:01:35 by gtaza-ca          #+#    #+#             */
/*   Updated: 2023/11/25 18:09:18 by gtaza-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef unsigned long	t_ulong;

typedef struct t_item
{
	t_ulong			key;
	char			*value;
	struct t_item	*next;
}	t_item;

#endif
