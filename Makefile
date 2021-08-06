SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \

OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
CC = gcc

.c.o :
	${CC} ${CFLAGS} 
