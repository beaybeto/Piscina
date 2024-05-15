/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:52:35 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/14 15:25:21 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_par (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			write (1, &str[i], 1);
		}
		i++;
	}

}
int	main(int argc, char **argv)
{
	ft_is_par(argv[1]);
	return (0);
}
