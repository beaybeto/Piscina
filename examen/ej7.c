/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej7.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:10:44 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/15 13:30:11 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
			i++;
	}
	return (i);
}
int	main(int argc, char **argv)
{
	int x;
	x = ft_strlen(argv[1]);
	printf("%d", x);
	return (0);
}
