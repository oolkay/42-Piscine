/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:07:32 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/06 11:12:22 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_iterative_power(5,3));
}*/
