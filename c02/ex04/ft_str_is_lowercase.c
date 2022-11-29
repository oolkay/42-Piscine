/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:26:31 by oolkay            #+#    #+#             */
/*   Updated: 2022/07/28 17:21:25 by oolkay           ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
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
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			j++;
			cnt++;
		}
		i++;
	}
	if (cnt == len)
		return (1);
	else
		return (0);
}
