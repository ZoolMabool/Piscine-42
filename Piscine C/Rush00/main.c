/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:13:51 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/02/21 15:03:37 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		rush(int x, int y);
void	ft_putchar(char c);
void	ft_top(int x);
void	ft_middle(int x, int y);

#include <stdlib.h>

int	main(int argc, char **argv)
{
	// char *str = "qwertyuiop";
	// ./rush 10 23  -> argc == 3 ; argv = ["./rush", "10", "23"] //(*argv + 1)[2]
	rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
