# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/24 17:33:05 by mbortnic          #+#    #+#              #
#    Updated: 2017/11/01 16:35:07 by mbortnic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/*.c

CFLAGS = -Wall -Wextra -Werror -I. -c

HEADER = libft.h

all: $(NAME)

$(NAME):
	$(CC) $(SRCS) $(CFLAGS) -I$(HEADER)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean clean all
