/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:13:03 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/09 11:31:56 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
//     int c = 23;
//     int d = 10;
//
//     int* a = &c;
//     int* b = &d;
//
//     printf(" %d  %d", *a, *b);
//
//     ft_ultimate_div_mod(a , b);
//
//     printf(" %d  %d", *a, *b);
// }
