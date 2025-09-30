/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 12:20:21 by smetz             #+#    #+#             */
/*   Updated: 2025/06/22 13:05:21 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_putendl_fd - Outputs the string 's' to the given file descriptor,
** followed by a newline character.
**
** @s: The string to output.
** @fd: The file descriptor on which to write.
**
** If 's' is NULL, the function does nothing.
*/
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		i++;
	write (fd, s, i);
	write (fd, "\n", 1);
}
