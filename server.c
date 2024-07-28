#include "minitalk.h"

/**
 * @brief Join a string with a character
 * @param s1 The string to join
 * @param c The character to join
 * @param string The new string
 * @param size The size of the string
 * @param i The index
 * @return char*
 */
char	*ft_strcjoin(char const *s1, char c)
{
	int		size;
	int		i;
	char	*string;

	if (s1)
		size = ft_strlen(s1);
	else
		size = 0;
	string = (char *)malloc(sizeof(char) * (size + 2));
	if (!string)
	{
		free(string);
		return (NULL);
	}
	i = -1;
	while (s1[++i])
		string[i] = s1[i];
	string[i++] = c;
	string[i] = '\0';
	return (string);
}

/**
 * @brief Convert the bits to ascii
 * @param sig The signal
 * @param bits The number of bits
 * @param i The index
 * @param str The string
 * @param temp The temporary string
 * @return void
 */
void	bit_ascii(int sig)
{
	static int	bits;
	static int	i;
	static char	*str;
	char		*temp;

	if (!str)
		str = ft_calloc(1, 1);
	if (sig == SIGUSR1)
		i |= (0x01 << bits);
	bits++;
	if (bits == 8)
	{
		temp = ft_strcjoin(str, (char)i);
		free(str);
		str = temp;
		if (i == 0)
		{
			ft_printf("%s\n", str);
			free(str);
			str = NULL;
		}
		bits = 0;
		i = 0;
	}
}

/**
 * @brief The core of the server side, where we receive the string from the client
 * @param argc The number of arguments
 * @param argv The arguments
 * @param pid The process id
 * @return int
 */
int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("%s", "Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("$ %s\n", "Gudaniel Server is open and running");
	ft_printf("$ [PID]: %d \n", pid);
	ft_printf("$ %s \n", "Client input:");
	while (argc == 1)
	{
		signal(SIGUSR1, bit_ascii);
		signal(SIGUSR2, bit_ascii);
		pause();
	}
	return (0);
}
