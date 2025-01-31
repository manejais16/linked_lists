TARGET = libft_ll.a
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_ll_delete_node.c ft_ll_add_node.c
OBJS  = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	ar -rcs $(TARGET) $^

fclean: clean
	rm -f $(OBJS)
	rm -f $(TARGET)
clean:
	rm -f $(OBJS)