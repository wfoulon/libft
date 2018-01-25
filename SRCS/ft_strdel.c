/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:46:38 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 14:58:50 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Prend en parametre l'adresse d'une chaine de caracteres qui
** doit etre liberee avec free() et son pointeur mis a NULL.
**
** PARAM : L'adresse de la chaine de caracteres dont il faut liberer la memoire
** et mettre le pointeur a NULL.
*/

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
