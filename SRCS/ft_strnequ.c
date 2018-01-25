/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:17:22 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/14 11:47:10 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Compare lexicographiquement s1 et s2 jusqu'a n caracteres max
** ou bien qu'un '\0' ait ete rencontre. Si les chaines sont egales, la
** fonction retourne 1, 0 sinon
**
** PARAM #1 : La 1ere chaine a comparer.
** PARAM #2 : La 2e chaine.
** PARAM #3 : Le nombre de caracteres a comparer au max.
**
** RETOUR : 1 si les chaines sont egales, 0 sinon.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] != '\0' && n > 0)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
		n--;
	}
	return (1);
}
