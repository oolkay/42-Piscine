/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:17:09 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/03 10:13:16 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

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
	int		i;
	int		j;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) == 1)
			{
				ft_swap(&av[i], &av[j]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		write (1, "\n", 1);
		j++;
	}
	return (0);
}
