/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:46:30 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/07 17:44:34 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** La fonction bzero met a zero les n premiers octets du bloc pointé par s
** Bzero function sets the first n bytes of the area starting at s to zero
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
