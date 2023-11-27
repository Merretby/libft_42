NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_memmove.c ft_isalpha.c ft_isprint.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_atoi.c ft_strnstr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_split.c ft_strjoin.c \
	ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

CBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c

OFILSE = $(CFILES:.c=.o)

OBONUS = $(CBONUS:.c=.o)


all: $(NAME)

$(NAME): $(OFILSE)

bonus: $(OBONUS)

.c.o:// Suffix rules
	$(CC) $(CFLAGS) -c $<// the name of first prerequisite (c)
	ar rc $(NAME) $@// the name of archive file

clean:
	rm -f $(OFILSE) $(OBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
