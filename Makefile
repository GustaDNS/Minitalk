# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 08:45:54 by gudaniel          #+#    #+#              #
#    Updated: 2024/07/29 08:45:54 by gudaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEC = client
NAMES = server
LIBFT = libft/libft.a
SRCC = client.c
SRCS = server.c
OBJC = $(SRCC:.c=.o)
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra -fPIC
INCLUDE = -I include
RM = rm -rf


all: $(NAMES) $(NAMEC)


$(NAMES): $(OBJS) $(LIBFT)
	$(CC) -o $@ $(OBJS) -Llibft -lft

$(NAMEC): $(OBJC) $(LIBFT)
	$(CC) -o $@ $(OBJC) -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(LIBFT):
	make -C libft

clean:
	$(RM) $(OBJS) $(OBJC)
	make -C libft clean

fclean: clean
	$(RM) $(NAMES) $(NAMEC)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re