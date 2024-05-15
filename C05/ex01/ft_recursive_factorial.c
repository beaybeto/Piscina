/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:17:40 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/21 11:19:51 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		result = ft_recursive_factorial(nb - 1) * nb;
	}
	return (result);
}
#include <stdio.h>
int	main(void)
{
	int x = 7;
	int y;
	y = ft_recursive_factorial(x);
	printf("%d", y);
	return (0);
}
