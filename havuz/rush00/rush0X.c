/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:07:16 by binanc            #+#    #+#             */
/*   Updated: 2022/08/28 12:33:29 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_putchar(char c);

void	rush(int x, int y)
{
	int	li;
	int	col;

	li = 0;
	while (++li <= y && x > 0 && y > 0)
	{
		col = 0;
		while (++col <= x)
		{
			if ((col == 1 || col == x) && (li == 1 || li == y))
			{
				if (col == 1 && li == 1)
					ft_putchar('A');
				else if ((col == 1 && li == y) || (col == x && li == 1))
					ft_putchar('C');
				else if ((col == x && li == y))
					ft_putchar('A');
			}
			else if (col == 1 || col == x || li == 1 || li == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
