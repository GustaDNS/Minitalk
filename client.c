#include "minitalk.h"

void	send_char(int pid, char c)
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
		usleep(200);
		bits++;
	}
}

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
		send_char(pid, argv[2][i]);
		i++;
	}
	send_char(pid, '\0');
	return (0);
}
