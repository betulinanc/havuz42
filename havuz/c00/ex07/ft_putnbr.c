/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 09:59:05 by binanc            #+#    #+#             */
/*   Updated: 2022/08/28 18:19:23 by binanc           ###   ########.fr       */
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
/*int main (void)
{
	ft_putnbr(9);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(42);
    //ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');
}*/
