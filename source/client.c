/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:24:54 by gudaniel          #+#    #+#             */
/*   Updated: 2024/07/23 12:33:06 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void send_string(int pid, char *str)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (j < 8)
		{
			if (str[i] & 1 << j)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			j++;
			usleep(200);
		}
		i++;
	}

}

int	main(int argc, char **argv)
{
	int	pid;
	int i;
	char *str;
	
	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
		{
			ft_printf("Invalid PID\n");
			return (1);
		}
		str = argv[2];
		while(i < ft_strlen(str))
		{
			send_string(pid, str[i]);
			i++;
		}
	}
	else
		ft_printf("Usage: ./client [server_pid] [message]\n");
	return (0);
}
	