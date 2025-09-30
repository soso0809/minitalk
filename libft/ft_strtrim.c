/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:35:18 by smetz             #+#    #+#             */
/*   Updated: 2025/06/25 07:33:51 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_firstchar(const char *s1, const char *set)
{
	size_t	firstchar;

	firstchar = 0;
	while (s1[firstchar] && is_in_set(set, s1[firstchar]))
		firstchar++;
	return (firstchar);
}

static size_t	get_lastchar(const char *s1, const char *set)
{
	size_t	lastchar;

	lastchar = ft_strlen(s1);
	while (lastchar > 0 && is_in_set(set, s1[lastchar - 1]))
		lastchar--;
	return (lastchar);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	firstchar;
	size_t	lastchar;
	size_t	size;
	size_t	i;
	char	*result;

	if (!s1 || !set)
		return (ft_strdup(""));
	firstchar = get_firstchar(s1, set);
	lastchar = get_lastchar(s1, set);
	if (firstchar >= lastchar)
		return (ft_strdup(""));
	size = lastchar - firstchar;
	result = (char *)malloc(size + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = s1[firstchar + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main()
{
	char *result= ft_strtrim("  Hello World  ", " ");
	printf("%s\n", result);
	return (0);
}*/
