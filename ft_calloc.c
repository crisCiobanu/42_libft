/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:53:31 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 14:57:51 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	int		i;
	int		finalsize;
	char	*temp;

	i = 0;
	finalsize = count * size;
	result = malloc(finalsize);
	if (!result)
		return (NULL);
	temp = (char *) result;
	while (i < finalsize)
	{
		temp[i] = '\0';
		i++;
	}
	return (result);
}
