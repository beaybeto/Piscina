/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:02:58 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/16 12:44:02 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	if (dest[j] == '\0')
	{
		while (src[i] != '\0')
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
	char origen[] = "como estas";
	char destino[30] = "buenos dias";
	ft_strcat(destino, origen);
	printf("%s", destino);
	return (0);
}*/
