/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:50:33 by oolkay            #+#    #+#             */
/*   Updated: 2022/07/28 17:49:30 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;
	int	t;

	len = 0;
	t = 0;
	while (str[t] != '\0')
	{
		len++;
		t++;
	}
	return (len);
}

int	ft_control(char *str)
{
	int	i;
	int	j;
	int	cnt;
	int	len;

	i = 0;
	j = 0;
	cnt = 0;
	len = ft_strlen(str);
	while (j < len)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			cnt++;
			i++;
		}
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			cnt++;
			i++;
		}
		j++;
	}
	return (cnt);
}

int	ft_str_is_alpha(char *str)
{
	int	len;
	int	cnt;

	len = ft_strlen(str);
	cnt = ft_control(str);
	if (cnt == len)
		return (1);
	else
		return (0);
}
