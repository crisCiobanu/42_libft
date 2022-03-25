/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:14:58 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/09 10:38:57 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (src[i] != '\0' && i + 1 < dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dest[i] = '\0';
	}
	return (length);
}
