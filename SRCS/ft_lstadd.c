/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:59:43 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/10 11:01:00 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Ajoute l'élément new en tête de la liste
**
** PARAM#1 : L'adresse d'un pointeur sur le premier maillon d'une liste
** PARAM#2 : Le maillon à ajouter en tête de cette liste
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
