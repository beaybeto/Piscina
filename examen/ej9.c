/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej9.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:59:02 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/19 16:12:14 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_change(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			write (1, &str[i], 1);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			write (1, &str[i], 1);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
}
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_change(argv[1]);
	}
	else
	{
		write (1, "\n", 1);
	}
	return (0);
}
