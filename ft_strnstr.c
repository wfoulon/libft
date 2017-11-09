/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:40:39 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 14:28:42 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp;
	char	*mem;
	size_t	size;

	mem = (char *)(haystack + len);
	size = ft_strlen(needle);
	tmp = (char *)haystack;
	if (!size)
		return ((char *)haystack);
	while ((tmp = ft_strchr(tmp, *needle)) && tmp <= mem)
	{
		if ((tmp + size <= mem) && !ft_strncmp(tmp, needle, size))
			return (tmp);
		tmp++;
	}
	return (NULL);
}
