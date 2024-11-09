/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:09:59 by akahir            #+#    #+#             */
/*   Updated: 2024/07/16 16:10:21 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && n)
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}