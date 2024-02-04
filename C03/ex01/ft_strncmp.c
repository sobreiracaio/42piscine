/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:03:18 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/15 16:56:42 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		while (i < n)
		{
			if (s1[i] == s2[i])
				i++;
			else if (s1[i] != s2[i])
			{
				if (s1[i] > s2[i])
					return (s1[i] - s2[i]);
				else if (s1[i] - s2[i] < 0)
					return ((s2[i] - s1[i]) * (-1));
				else
					return (s2[i] - s1[i]);
			}
		}
		return (0);
	}
	return (0);
}

//int main (void)
//{
//   char string1 [] = "Hell ";
//   char string2 [] = "Hell~";
//
//   printf("My function says: %d\n", ft_strncmp(string1, string2, 4));
//
//   printf("Strncmp says: %d\n", strncmp(string1, string2, 4));
//
//}
