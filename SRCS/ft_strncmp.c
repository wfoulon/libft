/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:28:58 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/10 11:59:03 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : strcmp compare the null-terminated strings s1 and s2. it
** compares not more than n characters. Strncmp is designed for comaparing
** strnigs rather than binary data, characters that appear after a '\0'
** character are not compared.
**
** VALEUR RENVOYEE : return an integer greater than, equal to, or less than 0,
** according as the string s1 is greater than, equal to,or less than the string
** s2. the comparison is done using unsigned characters, so that '\200' is 
** greater than '\0'.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
