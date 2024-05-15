/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:23:16 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/14 17:43:10 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_multiplica(int *a, int w)
{
	*a = w * (*a);
}
/*int	main(void)
{
	int r = 2;
	int *ptr;
	*ptr = 4;
	ft_multiplica(ptr, r);
	printf("%d", *ptr);
	return (0);
}*/
