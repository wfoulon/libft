/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:05:11 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 16:17:50 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : la fonction strcat ajoute la chaine src a la fin de de la
** chaine dest en ecrasant le caractere nul a la fin de dest, puis en ajoutant
** un nouveu caractere nul final. les chaines ne doivent pas se chevaucher, et 
** la chaine dest doit etre assez grande pour acceuillir le resultat.
** Elle ne prend en compte que les n premiers caracteres de src et src n'a 
** pas besoin d'octet nul final si elle contient n caracteres ou plus.
** La chaine resultante dans dest est toujours terminee par un caractere nul.
** Si src contient n caracteres ou plus, strncat ecrit n+1 caractere dans dest
** La taille de dest doit etre au moins strlen(dest)+n+1.
**
** VALEUR RENVOYEE : un pointeur sur la chaine resultat dest
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = 0;
	return (s1);
}
