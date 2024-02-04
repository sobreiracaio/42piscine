/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:18:55 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/18 15:27:08 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_baselen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

int	validate_base(char *base)
{
	int	i;
	int	j;

	if (ft_baselen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_size;	
	int				i;
	char			converted_base [32];
	long			n;

	base_size = ft_baselen(base);
	i = 0;
	if (!validate_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr;
		n = -n;
	}
	else
		n = nbr;
	while (n > 0)
	{
		converted_base [i] = base[n % base_size];
		n = n / base_size;
		i++;
	}
	while (--i >= 0)
		ft_putchar(converted_base[i]);
}

//int main (void)
//{
//   char base [] = "0123456789";
//   int number = -2147483648;
//  ft_putnbr_base(number, base) ;
//}
