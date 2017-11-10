# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/24 17:33:05 by mbortnic          #+#    #+#              #
#    Updated: 2017/11/10 14:56:42 by mbortnic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#SRCS = libc_funcs/ft_atoi.c \
	   libc_funcs/ft_bzero.c \
	   libc_funcs/ft_isalnum.c \
	   libc_funcs/ft_isalpha.c \
	   libc_funcs/ft_isascii.c \
	   libc_funcs/ft_isdigit.c \
	   libc_funcs/ft_isprint.c \
	   libc_funcs/ft_memccpy.c \
	   libc_funcs/ft_memchr.c \
	   libc_funcs/ft_memcmp.c \
	   libc_funcs/ft_memcpy.c \
	   libc_funcs/ft_memmove.c \
	   libc_funcs/ft_memset.c \
	   libc_funcs/ft_strcat.c \
	   libc_funcs/ft_strchr.c \
	   libc_funcs/ft_strcmp.c \
	   libc_funcs/ft_strcpy.c \
	   libc_funcs/ft_strdup.c \
	   libc_funcs/ft_strlcat.c \
	   libc_funcs/ft_strlen.c \
	   libc_funcs/ft_strncat.c \
	   libc_funcs/ft_strncmp.c \
	   libc_funcs/ft_strncpy.c \
	   libc_funcs/ft_strnstr.c \
	   libc_funcs/ft_strrchr.c \
	   libc_funcs/ft_strstr.c \
	   libc_funcs/ft_tolower.c \
	   libc_funcs/ft_toupper.c \
	   additional_funcs/ft_itoa.c \
	   additional_funcs/ft_memalloc.c \
	   additional_funcs/ft_memdel.c \
	   additional_funcs/ft_strnew.c \
	   additional_funcs/ft_strdel.c \
	   additional_funcs/ft_putchar.c \
	   additional_funcs/ft_putchar_fd.c \
	   additional_funcs/ft_putendl.c \
	   additional_funcs/ft_putendl_fd.c \
	   additional_funcs/ft_putnbr.c \
	   additional_funcs/ft_putnbr_fd.c \
	   additional_funcs/ft_putstr.c \
	   additional_funcs/ft_putstr_fd.c \
	   additional_funcs/ft_strclr.c \
	   additional_funcs/ft_strequ.c \
	   additional_funcs/ft_striter.c \
	   additional_funcs/ft_striteri.c \
	   additional_funcs/ft_strjoin.c \
	   additional_funcs/ft_strmap.c \
	   additional_funcs/ft_strmapi.c \
	   additional_funcs/ft_strnequ.c \
	   additional_funcs/ft_strsplit.c \
	   additional_funcs/ft_strsub.c \
	   additional_funcs/ft_strtrim.c \
	   personal_funcs/ft_numberlength.c \
	   personal_funcs/ft_wordcount.c \
	   personal_funcs/ft_wordlength.c #

SRCS = libc_funcs/*.c additional_funcs/*.c personal_funcs/*.c

CFLAGS = -Wall -Wextra -Werror -I. -c

HEADER = libft.h

all: $(NAME)

$(NAME): 
	@ gcc $(SRCS) $(CFLAGS)
	@ ar rc $(NAME) *.o
	@ ranlib $(NAME)

clean:
	@ rm -f *.o

fclean: clean
	@ rm -f $(NAME)

re: fclean all
