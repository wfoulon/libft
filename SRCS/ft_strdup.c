/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:48:23 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 12:18:25 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : fonction renvoie un pointeur sur une nouvelle chaine de 
** caractere qui est dupliquée depuis s. La mémoire occupée par cette nouvelle
** chaine est obtenue en appelant malloc(3), et doit donc être libéré avec free
**
** VALEUR RENVOYEE : un pointeur sur la chaine dupliquée, ou NULL s'il n'y
** avait pas assez de mémoire
*/

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*s2;

	i = 0;
	s2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
