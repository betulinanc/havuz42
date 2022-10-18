/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:40:40 by binanc            #+#    #+#             */
/*   Updated: 2022/09/07 15:47:57 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s1)
{
	write(1, &s1, 1);
}

void	ft_putnbr(int deg)
{
	if (deg == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (deg < 0)
	{
		ft_putchar('-');
		deg = -deg;
		ft_putnbr(deg);
	}
	else if (deg > 9)
	{
		ft_putnbr(deg / 10);
		ft_putnbr(deg % 10);
	}
	else
		ft_putchar(deg + 48);
}
