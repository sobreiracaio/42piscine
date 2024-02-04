/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:19:13 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/16 09:49:10 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	sum_len;

	i = 0;
	sum_len = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen (dest);
	if (size > dest_len)
	{
		sum_len = src_len + dest_len;
	}
	else
	{
	sum_len = src_len + size;
	}
	while (src[i] != '\0' && (dest_len + 1) < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (sum_len);
}

//int main (void)
//{
//   char src[] = " a potentially long string";
//   char dest[] = "this is";
//   unsigned int size = 10;
//
//  printf("%d\n", ft_strlcat(dest, src, size));
//
//
//   printf("%s\n",dest);
//   return 0;
//}
