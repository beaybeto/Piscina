/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:51:22 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/02 12:41:44 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	ascii;

	number = 0;
	while (number <= 9)
	{
		ascii = number + '0';
		write (1, &ascii, 1);
		number++;
	}
}
