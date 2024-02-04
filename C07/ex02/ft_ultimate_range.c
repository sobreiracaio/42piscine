/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:40:37 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/22 15:49:59 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*c;

	if (min > max)
	{
		c == NULL;
		return (0);
	}
	c = (int *)malloc(sizeof(int) * (max - min));
	if (c == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		c[i] = min;
		min++;
		i++;
	}
	*range = c;
	return (i);
}

//int main (void)
//{
//      int min = 4;
//    int max = 9;
//    int i = 0;
//    int *arr;
//    int size = max - min;
//
//    printf("Range size: %d\n",ft_ultimate_range(&arr,min, max));
//    
//    while( i < size)
//    {
//        printf("%d\n", arr[i]);
//        i++;
//    }
//   
//    free(arr);
//}
