CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
NAME_SV = server
NAME_CL = client
LIBFT = ./libft/libft.a


CL_SRC = client.c \

SV_SRC = server.c \

CL_OBJ = $(CL_SRC:.c=.o)

SV_OBJ = $(SV_SRC:.c=.o)

all: libs $(NAME_CL) $(NAME_SV) $(LIBS)

libs: 
	$(MAKE) -C ./libft/

$(NAME_CL): $(CL_OBJ) $(LIBS)
	$(CC) $(CFLAGS) $(CL_OBJ) $(LIBFT) -o $(NAME_CL)
	
$(NAME_SV): $(SV_OBJ) $(LIBS)
	$(CC) $(CFLAGS) $(SV_OBJ) $(LIBFT) -o $(NAME_SV)

clean:
	$(MAKE) clean -C ./libft/
	$(RM) $(CL_OBJ) $(SV_OBJ)

fclean: clean
	$(RM) $(NAME_CL) $(NAME_SV) $(LIBFT)

re: clean all

PHONY: all clean fclean re