/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:27:35 by smetz             #+#    #+#             */
/*   Updated: 2025/06/14 19:23:21 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*int main(void)
{
    char str[] = "Hello World!";
    char *result;

    // Test 1: Recherche d'un caractère existant
    result = ft_strchr(str, 'W');
    printf("Test 1 - Recherche de 'W': %s\n", result);

    // Test 2: Recherche d'un caractère inexistant
    result = ft_strchr(str, 'z');
    printf("Test 2 - Recherche de 'z': %s\n", result);

    // Test 3: Recherche du caractère nul
    result = ft_strchr(str, '\0');
    printf("Test 3 - Recherche de '\\0': %s\n", result);

    // Test 4: Recherche d'un caractère en début de chaîne
    result = ft_strchr(str, 'H');
    printf("Test 4 - Recherche de 'H': %s\n", result);

    // Test 5: Recherche d'un caractère en fin de chaîne
    result = ft_strchr(str, '!');
    printf("Test 5 - Recherche de '!': %s\n", result);

    // Test 6: Recherche d'un caractère qui apparaît plusieurs fois
    char str2[] = "Hello Hello";
    result = ft_strchr(str2, 'l');
    printf("Test 6 - Recherche de 'l': %s\n", result);

    return (0);
}
*/
