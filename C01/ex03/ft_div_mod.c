/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:31:34 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/09 11:23:38 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int main (void)
// {
//     int x = 45;
//     int y = 5;
//     int v1 = 1 ;
//     int v2 = 1;
//     int* p1 = &v1;
//     int* p2 = &v2;
//     printf(" %d  %d  %d  %d", x, y, *p1, *p2);
//     ft_div_mod (x, y, p1, p2);
//     printf(" %d  %d  %d  %d", x, y, *p1, *p2);
//}
