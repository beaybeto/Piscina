/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:07:12 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/21 17:15:14 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}	
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
#include <stdio.h>
int	main(void)
{
	int x = 7;
	int y;
	y = ft_iterative_factorial(x);
	printf("%d", y);
	return (0);
}
