/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:35:17 by oolkay            #+#    #+#             */
/*   Updated: 2022/07/29 08:51:07 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int			i;
	char		temp;
	int			backslash;

	i = 0;
	backslash = 92;
	while (str[i] != '\0')
	{
		if (str[i] <= 126 && str[i] >= 32)
			write (1, &str[i], 1);
		else
		{
			write(1, &backslash, 1);
			temp = str[i] / 16 + '0';
			write(1, &temp, 1);
			if (str[i] % 16 >= 10)
				temp = (str[i] % 16) - 10 + 'a';
			else
				temp = str[i] % 16 + '0';
			write(1, &temp, 1);
		}
		i++;
	}
}
