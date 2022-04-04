/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:05:58 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/03/10 09:05:31 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*res;
	int	size;
	int	i;

	i = 0;
	size = -5;
	res = ft_range(10, 5);
	while (i < size)
	{
		printf("%d", res[i]);
		i++;
	}
}

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	res = malloc(sizeof(res) * size);
	if (min > max)
		return (NULL);
	while (i < size)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
