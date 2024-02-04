/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:22:00 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/21 13:30:06 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int counter;
    char *c;

    c = (char*)malloc(sizeof(strs));
    if (c == NULL)
    {
        return (NULL);
    }
    if (size == 0)
    {
        c = "0";
        return (c);
    }
    i = 0;
    counter = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            c[counter] = strs[i][j];
            counter ++;
            j++;
        }
        j = 0;
        while (sep[j] != '\0' && i < size -1)
        {
            c[counter] = sep[j];
            counter++;
            j++;
        }
        i++;
    }
    c[counter] = '\0';
    return (c);
}

int main (void)
{
    char* dest;
    char* string[6];
    string [0] = "aaa";
    string [1] = "baa";
    string [2] = "c";
    string [3] = "d";
    string [4] = "e";
    string [5] = "f";

   // dest = ft_strjoin(6, string, "/");
    printf("%s\n", ft_strjoin(0, string, "/"));
    //free (dest);
   
    
   

}