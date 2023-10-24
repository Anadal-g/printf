NAME = libftprintf.a
SOURCES = \
	ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_printdec.c \
	ft_print_u.c \
	ft_print_ptr.c \


OBJECTS = $(SOURCES:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re