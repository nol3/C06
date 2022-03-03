/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:14:41 by acardena          #+#    #+#             */
/*   Updated: 2022/03/02 18:28:01 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putarg(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && (s1[x] == s2[x]))
		x++;
	return (s1[x] - s2[x]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	if (argc == 1)
		return (1);
	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while ((int)j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[j];
				argv[j] = swap;
			}
			j++;
		}
		i++;
	}
	ft_putarg(argv);
	return (0);
}
