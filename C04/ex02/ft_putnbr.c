/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:33:57 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/18 13:29:47 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	ascii;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb <= 9)
		{
			ascii = nb + '0';
			ft_putchar(ascii);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
/*int	main(void)
{
	int n = 2147483647;
	ft_putnbr(n);
	return (0);
}*/
