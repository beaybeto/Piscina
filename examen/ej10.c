/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:16:44 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/21 12:30:59 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' &&
				str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
#include <unistd.h>
int	main(int argc, char **argv)
{
	if (ft_is_alpha(argv[1]) == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	return (0);
}
