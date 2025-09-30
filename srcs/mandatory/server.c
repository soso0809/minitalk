/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:49:38 by smetz             #+#    #+#             */
/*   Updated: 2025/09/30 17:44:20 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Handler called on each received signal. Stores the bits.*/
int	handle_signal(int sig);

/* Display a character when 8 bits are received.*/
char	display_char();

#include "minitalk.h"

int main(void)
{
	ft_printf("PID du serveur : %d\n", getpid());
	while (1)
	{
		pause(); // Attend un signal (ne fait rien d'autre pour l'instant)
	}
	return (0);
}
