/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:46:20 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/21 16:07:07 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_capitalize(char *str)
{
	int	i;
	
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
		write (1, &str[0], 1);
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 0  && str[i] <= 47) ||
			(str[i] >= 58 && str[i] <= 64) ||
		   	(str[i] >= 91 && str[i] <= 96) || 
			str[i] >= 123)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		write (1, &str[i], 1);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
#include <unistd.h>
int	main(int argc, char **argv)
{
	ft_capitalize(argv[1]);
	return (0);
}
