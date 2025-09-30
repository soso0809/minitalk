/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:26:59 by smetz             #+#    #+#             */
/*   Updated: 2025/06/20 13:14:16 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*temp;

	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	i = 0;
	temp = (void *)malloc(count * size);
	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

/*int main()
{
	int *tab;
	size_t count = 5;
	size_t i = 0;
	// Allocate memory for an array of 5 ints, all initialized to zero
	tab = (int *)ft_calloc(count, sizeof(int));
	if (!tab)
	{
		printf("Memory allocation error\n");
		return 1;
	}
	printf("Contents of the array after calloc:\n");
	// Print each element of the array using a while loop
	while (i < count)
	{
		printf("tab[%zu] = %d\n", i, tab[i]);
		i++;
	}
	// Free the allocated memory
	free(tab);
	return 0;
}*/
