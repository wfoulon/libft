/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:20:10 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 16:45:20 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc()) et retourne la cpoie "fraiche" d'un
** troncon de la chaine passee en parametre. Le troncon commence a l'index
** start et a pour longueru len. Si start et len ne designent pas un troncon
** de chaine valide, le comportement est indetermine. Si l'allocation echoue,
** la fonction renvoie NULL.
**
** PARAM #1 : La chaine dans laquelle chercher le tronconon a copier.
** PARAM #2 : L'index dans la chaine ou debute le troncon a copier.
** PARAM #3 : La longueur du troncon a copier.
**
** RETOUR : Le troncon.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;
	size_t	j;

	ns = ft_strnew(len);
	if (!s || !ns)
		return (NULL);
	i = 0;
	j = 0;
	while (start--)
		i++;
	while (j < len)
	{
		ns[j] = s[i];
		i++;
		j++;
	}
	ns[j] = '\0';
	return (ns);
}
