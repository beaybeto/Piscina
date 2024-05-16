/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:45:57 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/16 12:53:50 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	if (dest[j] == '\0')
	{
		while (src[i] != '\0' && i < nb)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char origen[] = "aprendiendo programacion";
	char destino[50] = "estoy en 42";
	ft_strncat(destino, origen, 11);
	printf("%s", destino);
	return (0);
}*/
