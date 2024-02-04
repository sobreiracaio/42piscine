/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:08:06 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/22 15:38:32 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strleni(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size_str;
	int		i;
	char	*new_str;

	size_str = ft_strlen (src);
	new_str = (char *) malloc(sizeof(char) * size_str + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

//int main (void)
//{
//    char c [] = "abcdef";
//    printf("%s", ft_strdup(c));
//    free(ft_strdup(c));
//}
