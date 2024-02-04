/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:06 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/05 21:28:30 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	check_invalid_values(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "ERROR, INVALID PARAMETERS!!!\n", 29);
	}
	return (0);
}

void	ft_while(int x, int y, int rows, int columns)
{
	check_invalid_values (x, y);
	while (rows <= y)
	{
		if (x <= 0)
			break ;
		while (columns <= x)
		{
			if (rows == 1 && columns == 1)
				ft_putchar('A');
			else if (rows > 1 && rows < y && columns > 1 && columns < x)
				ft_putchar(' ');
			else if (rows == 1 && columns == x || columns == 1 && rows == y)
				ft_putchar('C');
			else if ((rows == y && columns == x))
				ft_putchar('A');
			else
				ft_putchar('B');
		columns++;
		}
		ft_putchar('\n');
		rows++;
		columns = 1;
	}
}

void	rush(int x, int y)
{
	ft_while(x, y, 1, 1);
}
