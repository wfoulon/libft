/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:31:53 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 16:06:43 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc()) et retourne une chaine de caractere
** fraiche terminee par un '\0'. Chaque caractere de la chaine est initialise a
** '\0'. Si l'allocation echoue, la fonction renvoie NULL.
**
**PARAMS : La taille de la chaine de caracteres a allouer.
**
** RETOUR : La chaine de caractere allouee et initialisee a 0.
*/

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(sizeof(char) * (size + 1));
	return (str);
}
