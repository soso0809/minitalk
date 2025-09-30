/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:49:32 by smetz             #+#    #+#             */
/*   Updated: 2025/09/30 17:53:13 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/* ************************************************************************** */
/*
* Purpose: send a bit (0 or 1) to the server via kill().
* Function implemented: send_bit
***	- 
*/
/* ************************************************************************** */
void	send_bit(int pid, int bit);


/* ************************************************************************** */
/*
* Purpose: split a character into bits and sends them one by one.
* Function implemented: send_char
***	- 
*/
/* ************************************************************************** */
void	send_char(int pid, char c);

/* ************************************************************************** */
/*
* Purpose: send a complete string of characters.
* Function implemented: send_string
***	- 
*/
/* ************************************************************************** */
void	send_string(int pid, const char *str);

/* ************************************************************************** */
/*
* Purpose: 
* Function implemented: main
***	-
*/
/* ************************************************************************** */
/* ************************************************************************** */
/*
* Purpose: entry point of the client program. Parse arguments and send message.
* Function implemented: main
***	- Check argument count.
***	- Convert PID argument to integer.
***	- Send the message string to the server.
*/
/* ************************************************************************** */
int	main (int argc, char **argv)
{
	int		pid;
	char	*message;
	
	if (argc != 3)
	{
		ft_printf("Usage: %s <PID> <message>\n", argv[0]);
		return (1);
	}

	pid = ft_atoi(argv[1]);
	message = argv[2];

	send_string(pid, message);
	return (0);
}
