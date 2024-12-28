NAME = libftprintf.a
SRCS = ft_printf.c print_format.c print_char.c print_string.c \
print_vptr.c print_decimal.c print_uint.c print_hex.c
OBJS = $(SRCS:.c=.o)
CC = cc
AR = ar rc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -Ilibft
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all
