/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:23:38 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/11 18:55:27 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 48 && str[i] <= 57)))
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
//    char str [] = "34234";
//    printf (" %d ", ft_str_is_numeric(str));
//}
