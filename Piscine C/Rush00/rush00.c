/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:00:52 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/02/21 14:05:03 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_top(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_middle(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y - 2)
	{
		ft_putchar('|');
		while (j < x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		i++;
		j = 0;
	}
}

int	rush(int x, int y)
{
	int	i;

	if (x > 0)
	{
		i = 0;
		ft_top(x);
		ft_middle(x, y);
		if (y >= 2 && x >= 1)
		{
			ft_putchar('o');
			i = 0;
			while (i < x - 2)
			{
				ft_putchar('-');
				i++;
			}
			ft_putchar('o');
			ft_putchar('\n');
		}
	}
	return (0);
}
