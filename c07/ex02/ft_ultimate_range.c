/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:33:21 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/08 18:41:41 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*cntrl;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	cntrl = (int *)malloc(sizeof(int) * len);
	if (!(cntrl))
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		cntrl[i] = min;
		min++;
		i++;
	}
	range[0] = cntrl;
	return (len);
}
/*
#include <stdio.h>
int		main(void)
{
	int	*tab;
	int	size;
	int	i = 0;

	size = ft_ultimate_range(&tab, 5, 10);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
