/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:03:05 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/08 16:44:54 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*str_dup(char *str)
{
	int		i;
	char	*dest;
	int		len;

	i = 0;
	len = ft_strlen(str) + 1;
	dest = (char *)malloc(sizeof(char) * len);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_str_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = str_dup(av[i]);
		i++;
	}
	arr[i].str = '\0';
	arr[i].copy = '\0';
}
