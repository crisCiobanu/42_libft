/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:03:48 by cciobanu          #+#    #+#             */
/*   Updated: 2022/01/24 08:36:23 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	length;
	size_t	destlength;
	size_t	i;

	length = 0;
	while (dest[length] && length < dstsize)
		length++;
	destlength = length;
	i = 0;
	if (destlength >= dstsize || !dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && i < dstsize - destlength - 1)
	{
		dest[length] = src[i];
		length++;
		i++;
	}
	dest[length] = '\0';
	return (destlength + ft_strlen(src));
}
