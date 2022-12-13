NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SRCS =	push_swap.c			\
		push_swap_utils.c	\
		push_swap_utils2.c	\
		push_swapshort.c	\
		push_swaplong.c		\
		sort_command_p.c	\
		sort_command_r.c	\
		sort_command_rr.c	\
		sort_command_s.c

OBJS = $(SRCS:.c=.o)

CC = gcc

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

LIBS =	Libft/libft.a

$(NAME): $(OBJS)
	make -C Libft
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	make -C Libft clean

fclean: clean
	rm -f $(NAME)
	make -C Libft fclean

re: fclean all