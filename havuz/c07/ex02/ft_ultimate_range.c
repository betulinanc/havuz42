/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:09:51 by binanc            #+#    #+#             */
/*   Updated: 2022/09/17 18:31:50 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*dest;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	dest = (int *)malloc(len * sizeof(int));
	if (!dest)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	*range = dest;
	while (i < len)
	{
		dest[i] = min + i;
		i++;
	}
	return (len);
}
