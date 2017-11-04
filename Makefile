# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/24 17:33:05 by mbortnic          #+#    #+#              #
#    Updated: 2017/11/04 13:07:12 by mbortnic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c \
	   srcs/ft_isprint.c srcs/ft_memalloc.c srcs/ft_memccpy.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_memcpy.c \
	   srcs/ft_memdel.c srcs/ft_memmove.c srcs/ft_memset.c srcs/ft_strcat.c srcs/ft_strchr.c srcs/ft_strcmp.c \
	   srcs/ft_strcpy.c srcs/ft_strdup.c srcs/ft_strlcat.c srcs/ft_strlen.c srcs/ft_strncat.c srcs/ft_strncmp.c \
	   srcs/ft_strncpy.c srcs/ft_strnstr.c srcs/ft_strrchr.c srcs/ft_strstr.c srcs/ft_tolower.c \
	   srcs/ft_toupper.c

CFLAGS = -Wall -Wextra -Werror -I. -c

HEADER = libft.h

BINS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): 
	@ gcc $(SRCS) $(CFLAGS)
	@ ar rc $(NAME) *.o
	@ ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) $<

clean:
	@ rm -f *.o

fclean: clean
	@ rm -f $(NAME)

re: fclean all
