/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:20:56 by akahir            #+#    #+#             */
/*   Updated: 2024/07/15 18:10:13 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*copy;
	int	range;
	int	i;

	range = max - min;
	i = 0;
	if (min >= max)
	{
		return (0);
	}
	copy = (int *)malloc(range * sizeof(int));
	if (copy == 0)
	{
		return (0);
	}
	while (i < range)
	{
		copy[i] = min + i;
		i++;
	}
	return (copy);
}
