/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:58:42 by oolkay            #+#    #+#             */
/*   Updated: 2022/07/27 14:53:20 by oolkay           ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;
	int	len;
	int	cnt;	

	i = 0;
	j = 0;
	len = ft_strlen(str);
	cnt = 0;
	while (j < len)
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			cnt++;
			i++;
		}
		j++;
	}
	if (cnt == len)
		return (1);
	else
		return (0);
}
