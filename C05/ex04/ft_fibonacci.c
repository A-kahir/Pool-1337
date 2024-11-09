/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:57:29 by akahir            #+#    #+#             */
/*   Updated: 2024/07/16 20:57:33 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 1;
	if (index < 0)
	{
		return (-1);
	}
	else if (index < 2)
	{
		return (index);
	}
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
