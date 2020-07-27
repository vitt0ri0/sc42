NAME = libft.a

HEADER = libft.h
FLAGS = -Wall -Werror -Wextra
SRC =
COMPILED = *.o

SRC += ft_atoi.c
SRC += ft_bzero.c
SRC += ft_calloc.c
SRC += ft_isalnum.c
SRC += ft_isalpha.c
SRC += ft_isascii.c
SRC += ft_isdigit.c
SRC += ft_isprint.c
SRC += ft_itoa.c
SRC += ft_memccpy.c
SRC += ft_memchr.c
SRC += ft_memcmp.c
SRC += ft_memcpy.c
SRC += ft_memmove.c
SRC += ft_memset.c
SRC += ft_putchar_fd.c
SRC += ft_putstr_fd.c
SRC += ft_putendl_fd.c
SRC += ft_putnbr_fd.c
SRC += ft_strchr.c
SRC += ft_strdup.c
SRC += ft_strjoin.c
SRC += ft_strlcat.c
SRC += ft_strlcpy.c
SRC += ft_strlen.c
SRC += ft_strmapi.c
SRC += ft_strncmp.c
SRC += ft_strrchr.c
SRC += ft_strnstr.c
SRC += ft_strrchr.c
SRC += ft_strtrim.c
SRC += ft_substr.c
SRC += ft_split.c
SRC += ft_tolower.c
SRC += ft_toupper.c

OBJS = $(SRC:.c=.o)

.PHONY: all, re, clean, fclean

all: $(NAME) clean

$(NAME): $(OBJS) $(HEADER)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o : %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

clean:
	/bin/rm -f $(COMPILED)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
