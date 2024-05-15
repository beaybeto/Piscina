/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej6.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:04:59 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/14 16:58:17 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_a(char *str)
{
	int i;
	int	contador_a;

	i = 0;
	contador_a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'A' || str[i] == 'a')
		{
			contador_a++;
		}
		i++;
	}
	return(contador_a);
}
int	main(int argc, char **argv)
{
	int x;
	x = ft_count_a(argv[1]);
	printf("%d", x);
	return (0);
}
