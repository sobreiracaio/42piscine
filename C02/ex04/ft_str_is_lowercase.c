/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:32:00 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/11 18:58:33 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 97 && str[i] <= 122)))
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
//    char str [] = "asdasdASAS";
//    printf (" %d ", ft_str_is_lowercase(str));
//}
