/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:11:49 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/19 13:31:01 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_length(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		i++;
		n++;
	}
	return (n);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, argv[0], ft_length(argv[0]));
		write(1, "\n", 1);
	}
	return (0);
}
