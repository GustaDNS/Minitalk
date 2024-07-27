#include "minitalk.h"

void send_char(int pid, char c)
{
	int bits;

	bits = 0;
	while ( bits < 8)
	{
		int signal = (c & (1 << bits)) ? SIGUSR1 : SIGUSR2;
		if (kill(pid, signal) == -1)
		{
			ft_printf("Error");
			exit(1);
		}
		usleep(200);
		bits++;
	}
}

int main(int argc, char **argv)
{
	size_t i;

	if (argc != 3)
	{
		ft_printf("Usage: %s <pid> <string>\n", argv[0]);
		return 1;
	}

	int pid = atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("Invalid PID\n");
		return 1;
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