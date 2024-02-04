/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:56:31 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/15 17:02:52 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_size;

	dest_size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest [dest_size + i] = src [i];
		i++;
	}
	dest [dest_size + i] = '\0';
	return (dest);
}

//int	main (void)
//{
//   char source [] = " a potentially long string";
//   char destination [] = "this is";
//
//   
//	printf("%d", size_of_string(destination));
//
//   printf("My function says: %s\n", ft_strncat(destination, source, 10));
//   
//   return 0;
//}
