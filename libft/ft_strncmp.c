/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:09:20 by smetz             #+#    #+#             */
/*   Updated: 2025/06/13 15:16:05 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*int	main()
{
	char	*test1= "abcoe";
	char 	*test2 = "bcdoe";
	char	*ft_test1= "abcoe";
	char 	*ft_test2 = "bcdoe";
	int		t;
	int		ft_t;

	t = strncmp(test1, test2, 'o');
	ft_t = ft_strncmp(ft_test1, ft_test2, 'o');

	printf("Result of test is : %d\n", t);
	printf("Result of ft_test is : %d\n", ft_t);
}*/
