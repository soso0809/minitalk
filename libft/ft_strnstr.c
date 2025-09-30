/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 21:25:25 by smetz             #+#    #+#             */
/*   Updated: 2025/06/16 13:43:06 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*
* Purpose: locate the first occurrence of the null-terminated string
 'needle'in the string 'haystack', where not more than 'len' characters are
 searched.
*** -Characters that appear after a '\0' character are not searched.
*
* haystack: the string to be searched.
* needle: the substring to search for.
* len: the maximum number of characters to search.
*
* Return: A pointer to the first occurrence of 'needle' in 'haystack',
*         or NULL if 'needle' is not found within the first 'len' characters.
*         If 'needle' is an empty string, 'haystack' is returned.
*/
/* ************************************************************************** */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] && ((i + j) < len) && (haystack[i + j] == needle[j]))
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*haystack;
	char	*needle;
	char	*result;

	// Test 1: normal test
	haystack = "Hello World";
	needle = "World";
	result = ft_strnstr(haystack, needle, 11);
	printf("Test 1: %s\n", result);

	// Test 2: empty needle
	haystack = "Hello World";
	needle = "";
	result = ft_strnstr(haystack, needle, 11);
	printf("Test 2: %s\n", result);

	// Test 3: needle longer than len
	haystack = "Hello World";
	needle = "World";
	result = ft_strnstr(haystack, needle, 5);
	printf("Test 3: %s\n", result);

	// Test 4: needle not founded
	haystack = "Hello World";
	needle = "Python";
	result = ft_strnstr(haystack, needle, 11);
	printf("Test 4: %s\n", result);

	return (0);
}*/
