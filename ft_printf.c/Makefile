# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 15:47:27 by ssonmez           #+#    #+#              #
#    Updated: 2022/12/24 19:12:59 by ssonmez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c ft_strlen.c ft_printputstr.c ft_printputchar.c ft_printputnbr.c \
		ft_printhxa.c ft_printptr.c ft_printunsigned.c

OBJS = $(SRC:.c=.o)

CC	= gcc

RM	= rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = printf.a

clean:
		$(RM) $(OBJS)
		
fclean:	clean
		$(RM) $(NAME)
		
re:	fclean $(NAME)

all:	$(OBJS) 
		ar rcs $(NAME) $(OBJS)
		
.PHONY: all clean fclean re

