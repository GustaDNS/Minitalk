/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:24:52 by gudaniel          #+#    #+#             */
/*   Updated: 2024/07/23 12:53:05 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_strcjoin(char const c, char *s)
{
	char	*res;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s[i] || !c)
		return (NULL);
	res = (char *)malloc(ft_strlen(c) + ft_strlen(s) + 1);
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		i++;
	}
	s[i + 1] = c;
	s[i + 2] = '\0';
	res[i + k] = '\0';
	return (res);
}

int	main(int argc, char **argv)
{
	int pid;
	int i;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error");
		return (0);
	}
	pid = getpid();
	ft_printf("Server PID: %d\n", pid);
	while (1)
	{
			signal(SIGUSR1, handler);
			signal(SIGUSR2, handler);
			pause();
	}
}
