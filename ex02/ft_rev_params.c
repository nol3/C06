/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:48:41 by acardena          #+#    #+#             */
/*   Updated: 2022/03/02 18:29:36 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putarg(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	unsigned int	argument;

	argument = argc - 1;
	if (argc > 1)
	{
		while (argument >= 1)
		{
			ft_putarg(argv[argument]);
			argument--;
		}
	}
}
