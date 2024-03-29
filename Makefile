SRCS = main.c utils.c ft_atoi_push.c sort_little.c radix.c ft_check.c sort.c index.c operations/swap.c operations/push.c operations/rotate.c operations/reverse_rotate.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: libft $(NAME)

libft:
	make bonus -C ./libft

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L./libft -lft

clean:
	make clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	rm -f libft/libft.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft