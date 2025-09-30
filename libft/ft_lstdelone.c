/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:18:06 by smetz             #+#    #+#             */
/*   Updated: 2025/06/24 19:15:36 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

/*void	free_content(void *content)
{
	free(content);
}
int	main(void)
{
	char *str = malloc(20);

	if (!str)
		return 1;
	strcpy(str, "Bonjour");
	t_list *node = ft_lstnew(str);
	ft_lstdelone(node, del_content);
	return 0;
}
*/
