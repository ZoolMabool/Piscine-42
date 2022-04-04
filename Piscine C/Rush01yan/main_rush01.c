/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rush01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:26:03 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/02/27 18:49:20 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	affichage(int tab[4][4]);

int	main(void)
{
	int		tab[4][4];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{	
			tab[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	affichage(tab);
	return (0);
}

void	affichage(int tab[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{	
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		j = 0;
		i++;
		write(1, "\n", 1);
	}
}
