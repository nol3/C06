/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:22:54 by acardena          #+#    #+#             */
/*   Updated: 2022/03/02 12:37:26 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	unsigned int	x;

	x = 0;
	if (argc >= 1)
	{
		while (argv[0][x])
		{
			ft_putchar(argv[0][x]);
			x++;
		}
		ft_putchar('\n');
	}
	return (0);
}
