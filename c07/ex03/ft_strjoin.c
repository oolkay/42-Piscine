/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:54:59 by oolkay            #+#    #+#             */
/*   Updated: 2022/08/08 19:07:31 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len_strs(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	len_sep(char *sep)
{
	int	len;

	len = 0;
	while (sep[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		y;

	arr = (char *)malloc(((size - 1) * len_sep(sep)) + len_strs(strs, size));
	i = 0;
	y = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			arr[y++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			arr[y++] = sep[j++];
		}
		i++;
	}
	arr[y] = '\0';
	return (arr);
}
/*
int	main(void)
{
	char	*tab[4];
	tab[0] = "ahmet";
	tab[1] = "mehmet";
	tab[2] = "omer";
	tab[3] = "faruk";
	printf("%s", ft_strjoin(4, tab, "SEPERATOR"));
	return (0);
}*/
