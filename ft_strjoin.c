/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:32:28 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:33:07 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lengths1;
	int		lengths2;
	int		i;
	int		j;
	char	*result;

	i = 0;
	lengths1 = ft_strlen(s1);
	lengths2 = ft_strlen(s2);
	result = malloc(sizeof(*s1) * (lengths1 + lengths2) + 1);
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = -1;
	while (s2[++j])
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
