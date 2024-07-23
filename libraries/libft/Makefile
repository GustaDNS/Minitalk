# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 17:27:27 by gudaniel          #+#    #+#              #
#    Updated: 2024/04/27 15:59:18 by gudaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = 	ft_atoi.c     ft_itoa.c        ft_putnbr_fd.c  ft_strlcpy.c  ft_toupper.c \
			ft_bzero.c    ft_memchr.c      ft_putstr_fd.c  ft_strlen.c 	 ft_strmapi.c\
			ft_calloc.c   ft_memcmp.c      ft_split.c      ft_strncmp.c \
			ft_isalnum.c  ft_memcpy.c      ft_strchr.c     ft_strnstr.c \
			ft_isalpha.c  ft_memmove.c     ft_strdup.c     ft_strrchr.c \
			ft_isascii.c  ft_memset.c      ft_striteri.c   ft_strtrim.c \
			ft_isdigit.c  ft_putchar_fd.c  ft_strjoin.c    ft_substr.c \
			ft_isprint.c  ft_putendl_fd.c  ft_strlcat.c    ft_tolower.c \

SOURCE_BONUS = ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c \
			   ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c	ft_lstmap.c

OBJ = $(SOURCE:.c=.o)
BONUS_OBJ = $(SOURCE_BONUS:.c=.o) $(OBJ)
FLAG = -Wall -Wextra -Werror
COMPILER = cc

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c	
	$(COMPILER) $(FLAG) -c $< -o $@

clean:	
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJ)
		@make OBJ="$(BONUS_OBJ)" all
