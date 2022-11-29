/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:08:13 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/03 10:17:24 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *av)
{
	int	j;

	j = 0;
	while (av[j] != '\0')
	{
		write (1, &av[j], 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	while (i > 0)
	{
		ft_putstr(av[i]);
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
