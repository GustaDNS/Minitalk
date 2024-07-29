/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:45:48 by gudaniel          #+#    #+#             */
/*   Updated: 2024/07/29 11:07:55 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

/*-----------------------INC-----------------------*/
# include "./libft/ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
/*-----------------------ART-----------------------*/
# define RED "\x1b[38;5;88m"
# define WHT "\x1b[0m"
/*-----------------------FUN-----------------------*/
void	bit_ascii(int sig);
void	send_string(int pid, char str, size_t len);
char	*ft_strcjoin(char const *s1, char c);
size_t	sleep_def(size_t len);

#endif