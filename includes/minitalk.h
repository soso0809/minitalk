/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetz <smetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:06:53 by smetz             #+#    #+#             */
/*   Updated: 2025/09/30 17:46:54 by smetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include "libft.h"
# include "ft_printf.h"

/* ************************************************************************** */
/* MANDATORY FUNCTION DECLARATIONS */
/* ************************************************************************** */

/* client.c */
void	send_bit(int pid, int bit);
void	send_char(int pid, char c);
void	send_string(int pid, const char *str);

/* server.c */
int		handle_signal(int sig);
char	display_char(void);

/* ************************************************************************** */
/* BONUS FUNCTION DECLARATIONS */
/* ************************************************************************** */

/* client_bonus.c*/

/* server_bonus.c */


#endif
