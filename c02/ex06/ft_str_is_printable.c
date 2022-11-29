/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:26:15 by oolkay            #+#    #+#             */
/*   Updated: 2022/07/28 17:22:29 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;
	int	len;
	int	cnt;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	cnt = 0;
	while (i < len)
	{
		if (str[j] <= 126 && str[j] >= 32)
		{
			cnt++;
			j++;
		}
		i++;
	}
	if (cnt == len)
		return (1);
	else
		return (0);
}
