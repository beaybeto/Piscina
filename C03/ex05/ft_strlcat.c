/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:58:10 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/19 13:53:51 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = j;
	while (src[i] != '\0' && j + 1 < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (k + i);
}
#include <stdio.h>
int	main(void)
{
	char origen[] = "buenas";
	char destino[20] = "tardes";
	int	x;
	x = ft_strlcat(destino, origen, 3);
	printf("%d", x);
	return (0);
}
