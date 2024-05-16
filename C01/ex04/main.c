/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:25:47 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/10 16:09:15 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int var1 = 10;
	int var2 = 2;
	int *punt1 = &var1;
	int *punt2 = &var2;
	ft_ultimate_div_mode(punt1, punt2);
	printf("%d %d", var1, var2);
	return (0);
}
