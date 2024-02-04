/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:06:20 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/09 12:03:46 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 1;
	while (i <= size - 1)
	{
		if (tab[i] < tab[i - 1])
		{
			temp = tab[i];
			tab [i] = tab [i - 1];
			tab[i - 1] = temp;
			i = 0;
		}
		i++;
	}
}

//int main (void)
//{
//    int ref [] = { 7, 9, 2, 3, 0, 1, 4, 6, 3};
//    int i = 0;
//    int size = 9;
//    ft_sort_int_tab (ref, 9);
//     while(i < size)
//     {
//         printf("%d", ref[i]);
//         i++;
//     }
// }
