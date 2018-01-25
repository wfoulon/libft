/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:01:16 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/10 11:03:48 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Parcourt la list lst en aplliquant à chaque maillon la fct f
**
** PARAM#1 : Pointeur sur le premier maillon d'une liste
** PARAM#2 : L'addresse d'une fonction a laquelle on apllique chaque maillon
** de la liste
*/


void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst && f)
	{
		ft_lstiter(lst->next, f);
		(*f)(lst);
	}
}
