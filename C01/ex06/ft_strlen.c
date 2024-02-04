/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:04:16 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/09 12:00:26 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i])
	{
		i++;
	}
	return (i);
}

//int main (void)
//{
//     char str [7] = "abcdefg";
//     ft_strlen(str);
//     printf ("%d", ft_strlen(str));
//}
