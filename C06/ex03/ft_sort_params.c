/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:10:52 by akahir            #+#    #+#             */
/*   Updated: 2024/07/18 09:41:29 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(int argc, char **argv)
{
	char	*empty;
	int		i;
	int		j;

	i = 0;
	while (i < argc -1)
	{
		j = i + 1;
		if (ft_strcmp(argv[i], argv[j]) > 0)
		{
			empty = argv[i];
			argv[i] = argv[j];
			argv[j] = empty;
			i = 0;
		}
		i++;
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_swap(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
	}
}
