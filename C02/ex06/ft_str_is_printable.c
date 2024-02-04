/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:38:20 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/11 19:02:58 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
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
//    char str [] = "";
//    printf (" %d ", ft_str_is_printable(str));
//}
