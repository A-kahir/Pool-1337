/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:29:15 by akahir            #+#    #+#             */
/*   Updated: 2024/07/15 18:09:21 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size_range;
	int	i;

	size_range = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc (size_range * sizeof (int));
	if (size_range == 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size_range)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size_range);
}
