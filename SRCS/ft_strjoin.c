/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:46:41 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/10 12:21:04 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** DESCRIPTION :Combines strings to a string separated by the specified
**              delimiter string.
**              The strjoin() function combines all strings in the
**              argument list, and puts the result into the returned
**              string with dynamically allocated memory. The returned
**              string is separated by the delimiter specified by the
**              first argument separator. The dynamically allocated memory
**              needs to be freed by the user.
**
** VALEUR RENVOYEE : The strjoin() returns a string with dynamically allocated
**      			 memory.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	char	*ret;

	a = 0;
	if (!s1 || !s2)
		return (0);
	ret = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ret)
		return (0);
	while (*s1)
	{
		ret[a] = *s1;
		s1++;
		a++;
	}
	while (*s2)
	{
		ret[a] = *s2;
		s2++;
		a++;
	}
	ret[a] = '\0';
	return (ret);
}
