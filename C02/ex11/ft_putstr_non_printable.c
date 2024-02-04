/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:05:12 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/14 10:00:40 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	convert_to_hex(int nbr)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr > 16)
	{
		convert_to_hex(nbr / 10);
		convert_to_hex (nbr % 10);
	}
	else
	{
		write(1, &hex[nbr], 1);
	}
	write (1, '\n', 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str [i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
			{
				write(1, "0", 1);
			}
			convert_to_hex(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}

//int main(void)
//{
//    char string [] = "asda\rdasdasd";
//	int i = 29;
//	convert_to_hex(i);
//
//    ft_putstr_non_printable(string);
//}
