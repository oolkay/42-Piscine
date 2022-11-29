/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 08:59:19 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/03 10:16:25 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		write (1, &av[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
