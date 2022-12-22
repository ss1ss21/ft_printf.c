# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 15:47:27 by ssonmez           #+#    #+#              #
#    Updated: 2022/12/21 18:03:13 by ssonmez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_printf.c ft_strlen.c ft_printputstr.c ft_printputchar.c ft_printputnbr.c

OBJS = $(SRC:.c=.o)

CC	= gcc

RM	= rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = printf.a
 
all: $(NAME)

claen:
		$(RM) $(OBJS)
		
fclean:	clean
		$(RM) $(NAME)
		
re:	fclean $(NAME)

bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS)
		
.PHONY: all clean fclean re bonus