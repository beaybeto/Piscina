/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:54:45 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/09 18:14:05 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	var_inter;

	var_inter = *a;
	*a = *b;
	*b = var_inter;
}
/*int	main(void)
{
	int x = 1;
	int y = 4;
	ft_swap(&x, &y);
	printf("%d  %d",x, y );
	return (0);
}*/
