/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:45:19 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/20 10:06:42 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > 1)
		{
			res = res * nb ;
			nb--;
		}
	}
	return (res);
}

//int main()
//{
//    printf("%d\n",ft_iterative_factorial(0));
//}
