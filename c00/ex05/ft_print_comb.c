/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:34:57 by oolkay            #+#    #+#             */
/*   Updated: 2022/07/25 12:01:19 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	z;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			z = j + 1;
			while (z <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &z, 1);
				if (i != '7')
					write (1, ", ", 2);
				z++;
			}
			j++;
		}
		i++;
	}
}
