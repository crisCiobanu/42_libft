/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:43:16 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 15:58:26 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numberlength(int n)
{
	int				length;
	int				ispositive;
	unsigned int	temp;

	length = 0;
	ispositive = 1;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		length++;
		ispositive = -1;
	}
	temp = n * ispositive;
	while (temp > 0)
	{
		length ++;
		temp /= 10;
	}
	return (length);
}

static char	*ft_reverse(char *string, int length)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = string[end];
		string[end] = string[start];
		string[start] = temp;
		start++;
		end--;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	int				isnegative;
	unsigned int	temp;
	char			*result;
	int				i;

	isnegative = 1;
	if (n < 0)
		isnegative = -1;
	temp = n * isnegative;
	result = malloc(sizeof(*result) * ft_numberlength(n) +1);
	if (!result)
		return (NULL);
	i = 0;
	while (temp > 0)
	{
		result[i++] = temp % 10 + 48;
		temp /= 10;
	}
	if (isnegative == -1)
		result[i++] = '-';
	if (n == 0)
		result[i++] = '0';
	result[i] = 0;
	return (ft_reverse(result, ft_numberlength(n)));
}
