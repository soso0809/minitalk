/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:55:40 by smetz             #+#    #+#             */
/*   Updated: 2025/06/05 17:56:40 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int character)
{
	if ((character >= '0' && character <= '9'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	*str;
	int		i;

	i = 0;
	str[100] = "Hello123!";
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			printf("'%is a digit\n", str[i]);
		else
		{
			printf("'%is not a digit\n", str[i]);
			i++;
		}
	}
	return (0);
}*/
