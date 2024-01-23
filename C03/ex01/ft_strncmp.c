/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 01:11:37 by misaac-c          #+#    #+#             */
/*   Updated: 2023/11/14 03:10:43 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (!n)
	{
		return (0);
	}
	while (count < n && s1[count] && s2[count] && s1[count] == s2[count])
	{
		count++;
	}
	if (count < n)
	{
		return (s1[count] - s2[count]);
	}
	else
	{
		return (0);
	}
}
