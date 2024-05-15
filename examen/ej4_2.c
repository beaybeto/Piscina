/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej4_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:59:08 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/15 12:07:12 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_impar(void)
{
	int	i;
	char ascii;

	i = 0;
	while (i >= 0 && i <= 9)
	{
		if (i % 2 == 0)
		{
			ascii = i + '0';
			write(1, &ascii, 1);
			write(1, " ", 1);
		}
		i++;
	}
	write(1, "1", 1);
	write(1, "0", 1);
}
int	main(void)
{
	ft_is_impar();
	return (0);
}
