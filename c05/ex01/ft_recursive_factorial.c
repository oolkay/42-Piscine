/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:07:54 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/08 12:20:35 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
		//nb--;
	}
	return (i);
}
///*
#include <stdio.h>
int	main()
{
	printf("%d",ft_recursive_factorial(5));
}//*/
