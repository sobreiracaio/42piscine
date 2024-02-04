/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:15:57 by crocha-s          #+#    #+#             */
/*   Updated: 2023/02/18 13:52:22 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	rev;

	rev = argc - 1;
	while (rev >= 1)
	{
		j = 0;
		while (argv[rev][j])
		{
			write (1, &argv[rev][j], 1);
			j++;
		}
		write(1, "\n", 1);
		rev--;
	}
	return (0);
}
