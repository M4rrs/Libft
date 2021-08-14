SRCS = ft_memset.c ft_memcpy.c ft_bzero.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd ft_putstr_fd ft_putendl_fd \
		ft_putnbr_fd \

		
OBJS = ${SRCS:.c=.o}
INCLUDE = libft.h
NAME = ${LIB}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB = libft.a

all: ${NAME}

${NAME}:	${OBJS}
	ar rcs ${LIB} ${OBJS}

.c.o :
	${CC} ${CFLAGS} -I. ${INCLUDE} -c $<

clean: 
	rm -f ${OBJS}

fclean:	clean
	rm -f ${LIB}

re: fclean all

