/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:33:15 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/11 19:11:25 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}

//int main (void)
//{
//    char str [] = "sdfsaSDASDAD3453dfsd";
//    printf (" %s ", ft_strlowcase(str));
//}
