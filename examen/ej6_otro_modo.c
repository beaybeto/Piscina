/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej6_otro_modo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:05:09 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/14 17:07:45 by bruiz-ro         ###   ########.fr       */
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
int	main(void)
{
	int x;
	char array[] = "buenas mAnzanas";
	x = ft_count_a(array);
	printf("%d", x);
	return (0);
}
