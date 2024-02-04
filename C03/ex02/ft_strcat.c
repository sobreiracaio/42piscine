/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:45:45 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/15 16:58:27 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	size_of_string(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size_dest;
	int	i;

	size_dest = size_of_string(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest [size_dest + i] = src [i];
		i++;
	}
	dest [size_dest + i] = '\0';
	return (dest);
}

//int main (void)
//{
//   char source [] = "World!";
//   char destination [] = "Hello, ";
//
//   
//	printf("%d", size_of_string(destination));
//  
//	printf("My function says: %s\n", ft_strcat(destination, source));
//   printf("Strcat says: %s\n", strcat(destination, source));
//   
//   return 0;
//}
