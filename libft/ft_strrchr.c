/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:21:27 by smetz             #+#    #+#             */
/*   Updated: 2025/06/14 19:22:45 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	i = 0;
	t = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			t = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (t);
}

/*int	main(void)
{
	char	*str = "check string";
	char	*strft = "chek string";

	char	*t = strrchr(str, 'c');
	char	*tt = ft_strrchr(strft, 'c');
	printf("Original strrchr: %s\n", t);
	printf("My ft_strrchr: %s\n", tt);
	return (0);
}*/
