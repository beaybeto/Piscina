/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:40:08 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/14 15:47:31 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	is_not_par(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	is_not_par(argv[1]);
	return (0);
}
