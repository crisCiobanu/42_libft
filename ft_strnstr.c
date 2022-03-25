/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:00:32 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:13:49 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	while (needle[i] && haystack[i])
	{
		if (needle[i] == haystack[i])
			i++;
		else
			return (-1);
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	needlelength;
	char	*result;

	i = 0;
	needlelength = ft_strlen(needle);
	result = (char *)haystack;
	if (needle[0] == '\0')
		return (result);
	while (haystack[i] && (i + needlelength) < n)
	{
		if (result[i] == needle[0] && (ft_check(&result[i], needle) > 0))
			return (&result[i]);
		i++;
	}
	return (NULL);
}
