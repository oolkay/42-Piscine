/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:48:45 by oolkay            #+#    #+#             */
/*   Updated: 2022/07/25 11:39:23 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	maxcheck(int n, int array[])
{
	int	i;
	int	j;
	int	max;

	max = 9;
	i = n - 1;
	j = 0;
	while (array[i] == max)
	{
		max--;
		i--;
	}
	if (array[0] != 10 - n)
	{
		array[i]++;
		while (i + j < n)
		{
			array[i + 1 + j] = array[i + j] + 1;
			j++;
		}
	}
}

void	output(int n, int array[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		putchar(array[i] + '0');
		i++;
	}
	if (array[0] != 10 - n)
	{
		putchar(',');
		putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	array[10];

	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
	while (array[0] != 10 - n && array[n - 1] != 10)
	{
		output(n, array);
		maxcheck(n, array);
	}
	output(n, array);
}
