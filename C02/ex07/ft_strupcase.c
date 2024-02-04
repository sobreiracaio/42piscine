/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:51:23 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/11 19:07:13 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 97 && str[i] <= 122)))
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

//int main (void)
//{
//    char str [] = "sdfs3453dfsd";
//    printf (" %s ", ft_strupcase(str));
//}
