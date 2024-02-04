/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:57:49 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/15 16:41:41 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
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

//int main (void)
//{
//    char string1 [] = "dfsdfsd ";
//    char string2 [] = "dfsdfsd~";
//
//    printf("My function says: %d\n", ft_strcmp(string1, string2));
//
//    printf("Strcmp says: %d\n", strcmp(string1, string2));
//
//}
