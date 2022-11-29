/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:05:55 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/03 03:50:00 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	digit(int x)
{
	int	digit_count;

	digit_count = 0;
	while (x > 0)
	{
		x = x / 10;
		digit_count++;
	}
	return (digit_count);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	whileloop(int temp, int nb)
{
	int	n;
	int	i;
	int	len;

	i = 0;
	len = digit(nb);
	while (i < len)
	{
		n = i;
		while (len - 1 - n > 0)
		{
			temp = temp / 10;
			n++;
		}
		if (i == len - 1)
		{
			ft_putchar(nb % 10 + '0');
		}
		else
		{
			ft_putchar((temp % 10) + '0');
		}
		temp = nb;
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb > 0)
		whileloop(nb, nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		whileloop(nb, nb);
	}
	if (nb == 0)
		ft_putchar('0');
}
