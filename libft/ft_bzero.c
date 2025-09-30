/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 07:50:53 by smetz             #+#    #+#             */
/*   Updated: 2025/06/14 11:26:04 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char	buffer[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		buffer[i] = 'A';
		i++;
	}
	// Display before ft_bzero
	printf("Before ft_bzero : ");

	i = 0;
	while (i < 10)
	{
		printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");

	ft_bzero(buffer, 5);
	printf("After ft_bzero  : ");
	i = 0;
	while (i < 10)
	{
		if (buffer[i] == 0)
			printf("0 ");
		else
			printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");

	return 0;
}*/
