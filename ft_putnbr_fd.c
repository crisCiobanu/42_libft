/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:07:02 by cciobanu          #+#    #+#             */
/*   Updated: 2022/03/25 16:08:40 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert(unsigned int n, int fd)
{
	char	c;

	if (n >= 10)
	{
		ft_convert(n / 10, fd);
	}
	c = n % 10 + 48;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	temp;
	int				ispositive;

	ispositive = 1;
	if (n < 0)
	{
		ispositive = -1;
		write(fd, "-", 1);
	}
	temp = n * ispositive;
	ft_convert(temp, fd);
}
