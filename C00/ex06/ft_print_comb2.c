/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:44:43 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/07 10:51:19 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_charr(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int a, int b)
{
	ft_charr(a / 10 + '0');
	ft_charr(a % 10 + '0');
	ft_charr(' ');
	ft_charr(b / 10 + '0');
	ft_charr(b % 10 + '0');
	if (a != 98)
	{
		ft_charr(',');
		ft_charr(' ');
	}
}

void	ft_print_comb2(void)
{
	int	number_right;
	int	number_left;

	number_right = 1;
	number_left = 0 ;
	while (number_left <= 98)
	{
			number_right = number_left +1;
		while (number_right <= 99)
		{
			print_numbers (number_left, number_right);
			number_right++;
		}
			number_left++;
	}
}
