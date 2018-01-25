/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 08:55:53 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 11:24:17 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : la fonction strcat ajoute la chaine src a la fin de de la
** chaine dest en ecrasant le caractere nul a la fin de dest, puis en ajoutant
** un nouveu caractere nul final. les chaines ne doivent pas se chevaucher, et 
** la chaine dest doit etre assez grande pour acceuillir le resultat.
**
** VALEUR RENVOYEE : la fonction renvoie un pointeur sur la chaine resultat dst
**
*/

char	*ft_strcat(char *s1, char *s2)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i])
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = 0;
	return (s1);
}
