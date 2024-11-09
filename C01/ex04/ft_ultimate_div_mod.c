/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:45:31 by akahir            #+#    #+#             */
/*   Updated: 2024/06/27 19:50:18 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stock_a;
	int	stock_b;

	stock_a = *a / *b;
	stock_b = *a % *b;
	*a = stock_a;
	*b = stock_b;
}
