/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:35:59 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/11 19:00:36 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 65 && str[i] <= 90)))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}

//int main (void)
//{
//    char str [] = "ASASasdas3123";
//    printf (" %d ", ft_str_is_uppercase(str));
//}
