/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:45:40 by gudaniel          #+#    #+#             */
/*   Updated: 2024/07/29 11:36:08 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	sleep_def(size_t len)
{
	int	i;

	if (len <= 10000)
		i = 50;
	if (len <= 30000)
		i = 100;
	if (len <= 50000)
		i = 300;
	if (len <= 40000)
		i = 450;
	return (50000);
}

/**
 * @brief Send a character to the server
 * @param pid The process id of the server
 * @param c The character to send
 * @param signal The signal to send
 * @param bits The number of bits to send
 * @return void
 */
void	send_char(int pid, char c, size_t len)
{
	int	bits;
	int	signal;

	bits = 0;
	while (bits < 8)
	{
		if (c & (0x01 << bits))
			signal = SIGUSR1;
		else
			signal = SIGUSR2;
		if (kill(pid, signal) == -1)
		{
			if (signal == SIGUSR1)
				ft_printf("Error to send SIGUSR1\n");
			else
				ft_printf("Error to send SIGUSR2\n");
			exit(1);
		}
		usleep(sleep_def(len));
		bits++;
	}
}

/**
 * @brief The core of the client side, where we send 
 * the string to the server and handle the errors
 * @param argc The number of arguments
 * @param argv The arguments
 * @param i The index
 * @param pid The process id
 * @return int
 */
int	main(int argc, char **argv)
{
	size_t	i;
	int		pid;

	if (argc != 3)
	{
		ft_printf("Usage: %s <pid> <string>\n", argv[0]);
		return (1);
	}
	pid = atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("Invalid PID\n");
		return (1);
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		send_char(pid, argv[2][i], ft_strlen(argv[2]));
		i++;
	}
	send_char(pid, '\0', 1);
	return (0);
}
