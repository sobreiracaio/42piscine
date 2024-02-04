/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:38:39 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/13 20:13:21 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha_numeric(char *str, int i)
{
	while (str[i] != '\0')
	{
		if ((48 <= str[i] && str[i] <= 57) || (65 <= str[i] && str[i] <= 90)
			|| (97 <= str[i] && str[i] <= 122))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] -32;
	}
	while (str[i] != '\0')
	{
		if ((is_alpha_numeric(str, i - 1) == 0)
			&& ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int main (void)
{
    char str [] = "ol42a, TuDo b**em? 4duas; cin+Qu/enta+e+um";
    printf ("%s", ft_strcapitalize(str));
}
