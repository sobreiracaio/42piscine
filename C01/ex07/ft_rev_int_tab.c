/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:26:24 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/09 12:02:20 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
	temp = tab[i];
	tab[i] = tab [size];
	tab[size] = temp;
	i++;
	size--;
	}
}

// int main(void)
// {
//     int stri [] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int i = 0;
//     int size = 10;
//     ft_rev_int_tab (stri,10);
//     while(i < size)
//     {
//         printf("%d", stri[i]);
//         i++;
//     }
//     }
