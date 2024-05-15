/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:33:34 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/21 18:46:50 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	if (index <= 1)
	{ 
		return (-1);
	}
	if(index == 0 || index == 1)
		return (1);
	else
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (i);
	}
}
#include <stdio.h>
int	main(void)
{
	int i = 7;
	printf("%d", ft_fibonacci(i));
	return (0);
}
