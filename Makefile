NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc
SRC = 
OBJECTS = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean: 
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
