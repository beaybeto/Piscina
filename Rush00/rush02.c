/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:44:36 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/03 19:51:36 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int x, char left, char mid, char right)
{
	int	aux_x;

	aux_x = x;
	while (aux_x > 0)
	{
		if (aux_x == x)
		{
			ft_putchar(left);
		}
		else if (aux_x == 1)
		{
			ft_putchar(right);
		}
		else
		{
			ft_putchar(mid);
		}
		aux_x--;
	}
}

void	success(int aux_y, int y, int aux_x, int x)
{
	while (aux_y > 0)
	{
		if (aux_y == y)
		{
			print(x, 'A', 'B', 'A');
		}
		else if (aux_y == 1)
		{
			print(x, 'C', 'B', 'C');
		}
		else
		{
			print(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		aux_y--;
	}
}

void	rush(int x, int y)
{
	int	aux_y;
	int	aux_x;

	aux_y = y;
	aux_x = x;
	if (x > 0 && y > 0)
	{
		success(aux_y, y, aux_x, x);
	}
	else
	{
		write(1, "FALLASTE!!!!!! INTENTALO DE NUEVO ;)", 50);
	}
}
