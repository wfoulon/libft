/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:27:20 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 14:31:24 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Prend en parametre l'adresse d'un pointeur dont la zone
** pointee doit etre liberee avec free(3), puis le pointeur est mis a NULL.
**
** PARAM #1 : L'adresse d'un pointeur dont il faut liberer la memoire puis le
** mettre a NULL.
*/

void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
