/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attribution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croussea <croussea@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:53:32 by croussea          #+#    #+#             */
/*   Updated: 2023/11/29 17:00:35 by croussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct Carte {
    char obstacle;
    char caseLibre;
};


struct Carte attribuer(const char *carte, int largeur, int hauteur) 
{
    struct Carte result;
	char premierCaractere;
	int	i;

	premierCaractere = carte[0];
	i = 0;
	largeur = length(carte);
	hauteur = file_length(carte) / length(carte);
    result.obstacle = premierCaractere;

	while (i < largeur)
	{
		if (carte[i] == carte[0])
		{
			i++;
		}
		else
		{
			result.caseLibre = carte[i];
		}
	}
    return result;
}
