/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:19:50 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 15:49:47 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : the fucntion copy and concatenate strings respectively. She is 
** designed to be safer, more consistent, and less error prone replacements for 
** strncpy and strncat. Unlike those functions, strlcat takes the full size of 
** the buffer and guarantee to nul-terminate the result. Note that a byte for
** the NUL should be included in size
**
** VALEUR RENVOYEE : the function return the total lenght of the string, she 
** tried to create. The initial lenght of dst plus the lenght of src.
*/



size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_dst;
	size_t len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	else
		ft_strncat(dst, src, size - len_dst - 1);
	return (len_dst + len_src);
}
