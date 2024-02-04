/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:10:37 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/07 10:51:19 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c)
{
	ft_char(a);
	ft_char(b);
	ft_char(c);
	if (a == '7' && b == '8' && c == '9')
	{
		return ;
	}
	else
	{
		ft_char(',');
		ft_char(' ');
	}
}

void	ft_print_comb(void)
{
	int	d;
	int	e;
	int	f;

	d = '0';
	e = '1';
	f = '2';
	while (d < ('7' + 1))
	{
		while (e < ('8' + 1))
		{
			while (f < ('9' + 1))
			{
				ft_print(d, e, f);
				f++;
			}
			f = ++e +1;
		}		
		e = ++d;
	}
}
