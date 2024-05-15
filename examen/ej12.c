/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:10:55 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/21 16:54:02 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_num(void)
{
	int nb;
	int	mod;
	int aux;
	char ascii;
	char resto;
	
	nb = 1;
	while (nb <= 50)
	{
		if (nb % 2 == 0 && nb % 9 == 0)
		{
			write (1, "mario y sonic", 13);
		}
		else if (nb % 2 == 0)
		{
			write (1, "mario", 5);
		}
		else if (nb % 9 == 0)
		{
			write (1, "sonic", 5);
		}
		else
		{
			if (nb <= 9)
			{
				ascii = nb + '0';
				write (1, &ascii, 1);
			}
			else
			{
				if (nb > 9)
				{
					aux = nb / 10;
					mod = nb % 10;
					ascii = aux + '0';
					resto = mod + '0';
					write (1, &ascii, 1);
					write (1, &resto, 1);
				}
			}
		}
		write (1, "\n", 1);
		nb++;
	}
}
int	main(void)
{
	ft_num();
	return (0);
}
