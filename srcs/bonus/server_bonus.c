/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:08:46 by smetz             #+#    #+#             */
/*   Updated: 2025/09/30 16:09:33 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(void)
{
	// Affiche le PID du serveur
	printf("[SERVER BONUS] PID: %d\n", getpid());
	// Boucle infinie pour attendre les signaux
	while (1)
	{
		pause(); // Attend un signal
	}
	return 0;
}
