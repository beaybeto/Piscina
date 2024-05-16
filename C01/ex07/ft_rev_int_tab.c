/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruiz-ro <bruiz-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:54:34 by bruiz-ro          #+#    #+#             */
/*   Updated: 2024/03/09 18:17:33 by bruiz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	temporal;

	left = 0;
	right = size -1;
	while (left < right)
	{
		temporal = tab[left];
		tab[left] = tab[right];
		tab[right] = temporal;
		left++;
		right--;
	}
}
/*int	main(void)
{
	int	array[4] = {1, 2, 3, 4};
	int size = 4;
	int i = 0;
	ft_rev_int_tab(array, size);
	while(i < size)
		{
			printf("%d", array[i]);
			i++;
		}	
	return (0);
}*/
