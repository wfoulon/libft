/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:19:44 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 15:04:02 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : la focntion strcmp() compare les deux chaines s1 et s2. elle
** renvoie un eniter négatif, nul, si s1 est respectivement inferieure, egale 
** ou superieur a s2.
**
**VALEUR RENVOYE : elle renvoie un eniter inferieur, egal, ou superieur a 0, si
** s1 (ou ses n premiers octets) est respectivement inferieure, egale ou sup
** a s2.
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
